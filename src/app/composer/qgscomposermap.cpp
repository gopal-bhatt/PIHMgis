/***************************************************************************
                         qgscomposermap.cpp
                             -------------------
    begin                : January 2005
    copyright            : (C) 2005 by Radim Blazek
    email                : blazek@itc.it
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "qgscomposermap.h"

#include "qgscoordinatetransform.h"
#include "qgsmapcanvas.h"
#include "qgsmaplayer.h"
#include "qgsmaptopixel.h"
#include "qgsproject.h"
#include "qgsmaprender.h"
#include "qgsvectorlayer.h"

#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QPainter>
#include <iostream>
#include <cmath>

QgsComposerMap::QgsComposerMap ( QgsComposition *composition, int id, int x, int y, int width, int height )
    : QWidget(), QGraphicsRectItem(0,0,width,height,0)
{
std::cout << "QgsComposerMap::QgsComposerMap()" << std::endl;

    setupUi(this);

    mComposition = composition;
    mId = id;
    mMapCanvas = mComposition->mapCanvas();
    mName = QString(tr("Map %1").arg(mId));

    init();
    recalculate();

    // Add to scene
    mComposition->canvas()->addItem(this);

    QGraphicsRectItem::setPos(x, y);
    QGraphicsRectItem::show();

    writeSettings();
}

QgsComposerMap::QgsComposerMap ( QgsComposition *composition, int id )
    : QGraphicsRectItem(0,0,10,10,0)
{
    setupUi(this);

    mComposition = composition;
    mId = id;
    mMapCanvas = mComposition->mapCanvas();
    mName = QString(tr("Map %1").arg(mId));

    init();
    readSettings();
    recalculate();

    // Add to scene
    mComposition->canvas()->addItem(this);
    QGraphicsRectItem::show();
}

void QgsComposerMap::init ()
{
    mNumCachedLayers = 0;
    mSelected = false;
    mUserExtent = mMapCanvas->extent();
    mDrawing = false;

    // Cache
    mCacheUpdated = false;

    // Calculate
    mCalculateComboBox->insertItem( tr("Extent (calculate scale)"), Scale );
    mCalculateComboBox->insertItem( tr("Scale (calculate extent)"), Extent );
    mCalculate = Scale;

    setPlotStyle ( QgsComposition::Preview );
    
    // Preview style
    mPreviewMode = Cache;
    mPreviewModeComboBox->insertItem ( tr("Cache"), Cache );
    mPreviewModeComboBox->insertItem ( tr("Render"), Render );
    mPreviewModeComboBox->insertItem ( tr("Rectangle"), Rectangle );
    mPreviewModeComboBox->setCurrentItem ( Cache );

    mWidthScale = 1.0 / mComposition->scale();
    mSymbolScale = 0.5;
    mFontScale = 1.0;

    mFrame = true;

    QGraphicsRectItem::setZValue(20);

    connect ( mMapCanvas, SIGNAL(layersChanged()), this, SLOT(mapCanvasChanged()) );
}

QgsComposerMap::~QgsComposerMap()
{
     std::cerr << "QgsComposerMap::~QgsComposerMap" << std::endl;
}

/* This function is called by paint() and cache() to render the map.  It does not override any functions
from QGraphicsItem. */
void QgsComposerMap::draw ( QPainter *painter, QgsRect &extent, QgsMapToPixel *transform)
{
  mMapCanvas->freeze(true);  // necessary ?
  int nlayers = mMapCanvas->layerCount();
    QgsCoordinateTransform* ct;

  for ( int i = nlayers - 1; i >= 0; i-- ) {
    QgsMapLayer *layer = mMapCanvas->getZpos(i);

    //if ( !layer->visible() ) continue;

    if (mMapCanvas->projectionsEnabled())
    {
      ct = new QgsCoordinateTransform(layer->srs(), mMapCanvas->mapRender()->destinationSrs());
    }
    else
    {
      ct = NULL;
    }

    if ( layer->type() == QgsMapLayer::VECTOR ) {
      QgsVectorLayer *vector = dynamic_cast <QgsVectorLayer*> (layer);

      double widthScale = mWidthScale;
      double symbolScale = mSymbolScale;

//TODO: attempt to scale cache lines and point symbols to be larger as we zoom in
/*    if(creating cache pixmap)
      {
        widthScale *= (cachePixmap.width / map.rect.width);
        symbolScale *= (cachePixmap.width / map.rect.width);
      }
*/
      QgsRect r1, r2;
      r1 = extent;
      // TODO: revisit later and make this QgsMapRender-aware [MD]
      // bool split = layer->projectExtent(r1, r2);
      bool split = false;
      
      vector->draw( painter, r1, transform, ct, FALSE, widthScale, symbolScale);

      if ( split )
      {
        vector->draw( painter, r2, transform, ct, FALSE, widthScale, symbolScale);
      }
    } else { 
      // raster
      if ( plotStyle() == QgsComposition::Print || plotStyle() == QgsComposition::Postscript ) {
        // we have to rescale the raster to get requested resolution
              
        // calculate relation between composition point size and requested resolution (in mm)
        double multip = (1. / mComposition->scale()) / (25.4 / mComposition->resolution()) ;
              
        double sc = mExtent.width() / (multip*QGraphicsRectItem::rect().width());
              
        QgsMapToPixel trans ( sc, multip*QGraphicsRectItem::rect().height(), mExtent.yMin(), mExtent.xMin() );
              
        painter->save();
        painter->scale( 1./multip, 1./multip);
        layer->draw( painter, extent, &trans, ct, FALSE);
              
        painter->restore();
      } 
      else 
      {
        layer->draw( painter, extent, transform, ct, FALSE);
      }
    }
    
    delete ct;
  }
    
  // Draw vector labels
  for ( int i = nlayers - 1; i >= 0; i-- ) {
    QgsMapLayer *layer = mMapCanvas->getZpos(i);

    if (mMapCanvas->projectionsEnabled())
    {
      ct = new QgsCoordinateTransform(layer->srs(), mMapCanvas->mapRender()->destinationSrs());
    }
    else
    {
      ct = NULL;
    }

//    if ( !layer->visible() ) continue; //this doesn't work with the newer map layer code

    if ( layer->type() == QgsMapLayer::VECTOR ) {
      QgsVectorLayer *vector = dynamic_cast <QgsVectorLayer*> (layer);

      if ( vector->labelOn() ) {
        double fontScale = 25.4 * mFontScale * mComposition->scale() / 72;
        if ( plotStyle() == QgsComposition::Postscript ) 
        {
          //fontScale = QgsComposition::psFontScaleFactor() * 72.0 / mComposition->resolution();

          // TODO
          // This is not completely correct because fonts written to postscript
          // should use size metrics.ascent() * 72.0 / mComposition->resolution();
          // We could add a factor for metrics.ascent()/size but it is variable
          // Add a parrameter in drawLables() ?
          fontScale = 72.0 / mComposition->resolution();
        }
        vector->drawLabels (  painter, extent, transform, ct, fontScale );
      }
    
      delete ct;
    }
  }
    
  mMapCanvas->freeze(false);
}

void QgsComposerMap::setUserExtent ( QgsRect const & rect )
{
    mUserExtent = rect;
    recalculate();
    
    QGraphicsRectItem::update();
    QGraphicsRectItem::scene()->update();
}

void QgsComposerMap::cache ( void )
{
    std::cout << "QgsComposerMap::cache()" << std::endl;

    // Create preview on some reasonable size. It was slow with cca 1500x1500 points on 2x1.5GHz 
    // Note: The resolution should also respect the line widths, it means that 
    //       1 pixel in cache should have ia similar size as 1 pixel in canvas
    //       but it can result in big cache -> limit

    int w = (int)(QGraphicsRectItem::rect().width() * mComposition->viewScale());
    w = w < 1000 ? w : 1000; //limit the cache pixmap to 1000 pixels wide
    int h = (int) ( mExtent.height() * w / mExtent.width() );
    // It can happen that extent is not initialised well -> check 
    if ( h < 1 || h > 10000 ) h = w; 

    std::cout << "extent = " << mExtent.width() <<  " x " << mExtent.height() << std::endl;
    std::cout << "cache = " << w <<  " x " << h << std::endl;

    mCacheExtent = QgsRect ( mExtent );
    double scale = mExtent.width() / w;
    mCacheExtent.setXmax ( mCacheExtent.xMin() + w * scale );
    mCacheExtent.setYmax ( mCacheExtent.yMin() + h * scale );
      
    mCachePixmap.resize( w, h );

    // WARNING: ymax in QgsMapToPixel is device height!!!
    QgsMapToPixel transform(scale, h, mCacheExtent.yMin(), mCacheExtent.xMin() );

//somthing about this transform isn't really what we want...
/*Ideally, the cache pixmap wouldn't behave the same as the map canvas.
* zooming in should make the lines become thicker, and symbols larger, rather than just
* redrawing them to be n pixels wide.
* We also want to make sure that changing the composition's resolution has the desired effect 
* on both the cache, screen render, and print.
*/

    std::cout << "transform = " << transform.showParameters().toLocal8Bit().data() << std::endl;
    
    mCachePixmap.fill(QColor(255,255,255));

    QPainter p(&mCachePixmap);
    
    draw( &p, mCacheExtent, &transform);
    p.end();

    mNumCachedLayers = mMapCanvas->layerCount();
    mCacheUpdated = true;
}

void QgsComposerMap::paint ( QPainter* painter, const QStyleOptionGraphicsItem* itemStyle, QWidget* pWidget)
{
  if ( mDrawing ) return; 
  mDrawing = true;

  std::cout << "QgsComposerMapt::paint mPlotStyle = " << plotStyle() 
            << " mPreviewMode = " << mPreviewMode << std::endl;
    
  if ( plotStyle() == QgsComposition::Preview &&  mPreviewMode == Cache ) { // Draw from cache
    std::cout << "use cache" << std::endl;

    if ( !mCacheUpdated || mMapCanvas->layerCount() != mNumCachedLayers ) 
    {
      cache();
    }
  
    // Scale so that the cache fills the map rectangle
    double scale = 1.0 * QGraphicsRectItem::rect().width() / mCachePixmap.width();
    std::cout << "scale = " << scale << std::endl;
  
    painter->save();

    painter->translate(0, 0); //do we need this?
    painter->scale(scale,scale);

    // Note: drawing only a visible part of the pixmap doesn't make it much faster
    painter->drawPixmap(0,0, mCachePixmap);

    painter->restore();
  } 
  else if ( (plotStyle() == QgsComposition::Preview && mPreviewMode == Render) || 
            plotStyle() == QgsComposition::Print ||
            plotStyle() == QgsComposition::Postscript ) 
  {
    std::cout << "render" << std::endl;
  
    double scale = mExtent.width() / QGraphicsRectItem::rect().width();
    QgsMapToPixel transform(scale, QGraphicsRectItem::rect().height(), mExtent.yMin(), mExtent.xMin() );

    painter->save();
    painter->translate(0, 0); //do we need this?

    // TODO: Qt4 appears to force QPainter::CoordDevice - need to check if this is actually valid.
    painter->setClipRect (QRectF( 0, 0, QGraphicsRectItem::rect().width(), QGraphicsRectItem::rect().height() ));

    draw( painter, mExtent, &transform);
    painter->restore();
  } 

  // Draw frame around
  if ( mFrame ) {
    QPen pen(QColor(0,0,0));
    pen.setWidthF(0.6*mComposition->scale());
    painter->setPen( pen );
    painter->setBrush( Qt::NoBrush );
    painter->setRenderHint(QPainter::Antialiasing, true); //turn on antialiasing for drawing the box
    painter->save();
    painter->translate(0, 0);//do we need this?
    painter->drawRect (QRectF( 0, 0, QGraphicsRectItem::rect().width(), QGraphicsRectItem::rect().height() ));
    painter->restore();
  }

  // Show selected / Highlight
  if ( mSelected && plotStyle() == QgsComposition::Preview ) {
    painter->setPen( mComposition->selectionPen() );
    painter->setBrush( mComposition->selectionBrush() );

    double s = mComposition->selectionBoxSize();

    painter->drawRect (QRectF(0, 0, s, s));
    painter->drawRect (QRectF(QGraphicsRectItem::rect().width() -s, 0, s, s));
    painter->drawRect (QRectF(QGraphicsRectItem::rect().width() -s, QGraphicsRectItem::rect().height() -s, s, s));
    painter->drawRect (QRectF(0, QGraphicsRectItem::rect().height() -s, s, s));
  }
    
  mDrawing = false;
}

void QgsComposerMap::sizeChanged ( void ) 
{
    int w, h;
    w = mComposition->fromMM ( mWidthLineEdit->text().toDouble() );
    h = mComposition->fromMM ( mHeightLineEdit->text().toDouble() );

    QGraphicsRectItem::setRect(0, 0, w, h);
    recalculate();

    QGraphicsRectItem::update();
    QGraphicsRectItem::scene()->update();
    
    writeSettings();
}

void QgsComposerMap::on_mWidthLineEdit_returnPressed ( void ) { sizeChanged(); }
void QgsComposerMap::on_mHeightLineEdit_returnPressed ( void ) { sizeChanged(); }

void QgsComposerMap::on_mCalculateComboBox_activated( int )
{
    mCalculate = mCalculateComboBox->currentItem();
    
    if ( mCalculate == Scale )
    {
	  recalculate();
      mCacheUpdated = false;
      QGraphicsRectItem::scene()->update();
      mComposition->emitMapChanged ( mId );
    }
    setOptions();
    writeSettings();
}

double QgsComposerMap::scaleFromUserScale ( double us ) 
{
  double s=0;
   
  switch ( mComposition->mapCanvas()->mapUnits() ) {
    case QGis::METERS :
      s = 1000. * mComposition->scale() / us;
      break;
    case QGis::FEET :
      s = 304.8 * mComposition->scale() / us;
      break;
    case QGis::UNKNOWN :
    case QGis::DEGREES :
      s = mComposition->scale() / us;
      break;
  }
  return s;
}

double QgsComposerMap::userScaleFromScale ( double s )
{ 
  double us=0;
    
  switch ( mComposition->mapCanvas()->mapUnits() ) {
    case QGis::METERS :
      us = 1000. * mComposition->scale() / s; 
      break;
    case QGis::FEET :
      us = 304.8 * mComposition->scale() / s; 
      break;
    case QGis::DEGREES :
    case QGis::UNKNOWN :
      us = mComposition->scale() / s;
      break;
  }
    
  return us;
}

void QgsComposerMap::on_mScaleLineEdit_returnPressed()
{
#ifdef QGISDEBUG
    std::cout << "QgsComposerMap::on_mScaleLineEdit_returnPressed" << std::endl;
#endif
    mCalculate = mCalculateComboBox->currentItem();

    mUserScale = mScaleLineEdit->text().toDouble();

    mScale = scaleFromUserScale ( mUserScale );

    recalculate();

    mCacheUpdated = false;
    QGraphicsRectItem::update();
    QGraphicsRectItem::scene()->update();
    
    writeSettings();
    mComposition->emitMapChanged ( mId );
}

void QgsComposerMap::scaleChanged ( void ) 
{
    mWidthScale = mWidthScaleLineEdit->text().toDouble();
    mSymbolScale = mSymbolScaleLineEdit->text().toDouble();
    mFontScale = mFontScaleLineEdit->text().toDouble();

    mCacheUpdated = false;
    QGraphicsRectItem::update();
    QGraphicsRectItem::scene()->update();
    
    writeSettings();
    mComposition->emitMapChanged ( mId );
}

void QgsComposerMap::on_mFontScaleLineEdit_returnPressed ( void ) { scaleChanged(); }
void QgsComposerMap::on_mSymbolScaleLineEdit_returnPressed ( void ) { scaleChanged(); }
void QgsComposerMap::on_mWidthScaleLineEdit_returnPressed ( void ) { scaleChanged(); }

void QgsComposerMap::mapCanvasChanged ( void ) 
{
    std::cout << "QgsComposerMap::canvasChanged" << std::endl;

    mCacheUpdated = false;
    QGraphicsRectItem::update();
}

void QgsComposerMap::on_mPreviewModeComboBox_activated ( int i )
{
    mPreviewMode = (PreviewMode) i;
    writeSettings();
}

void QgsComposerMap::recalculate ( void ) 
{
#ifdef QGISDEBUG
  std::cout << "QgsComposerMap::recalculate mCalculate = " << mCalculate << std::endl;
#endif
  if ( mCalculate == Scale ) 
  {
    // Calculate scale from extent and rectangle
    double xscale = QGraphicsRectItem::rect().width() / mUserExtent.width();
    double yscale = QGraphicsRectItem::rect().height() / mUserExtent.height();

    mExtent = mUserExtent;

    if ( xscale < yscale )
    {
      mScale = xscale;
      // extend y
      double d = ( 1. * QGraphicsRectItem::rect().height() / mScale - mUserExtent.height() ) / 2 ;
      mExtent.setYmin ( mUserExtent.yMin() - d );
      mExtent.setYmax ( mUserExtent.yMax() + d );
    }
    else
    {
      mScale = yscale;
      // extend x
      double d = ( 1.* QGraphicsRectItem::rect().width() / mScale - mUserExtent.width() ) / 2 ;
      mExtent.setXmin ( mUserExtent.xMin() - d );
      mExtent.setXmax ( mUserExtent.xMax() + d );
    }

    mUserScale = userScaleFromScale ( mScale );
  } 
  else
  {
    // Calculate extent
    double xc = ( mUserExtent.xMax() + mUserExtent.xMin() ) / 2;
    double yc = ( mUserExtent.yMax() + mUserExtent.yMin() ) / 2;
  
    double width = QGraphicsRectItem::rect().width() / mScale;
    double height = QGraphicsRectItem::rect().height() / mScale;
  
    mExtent.setXmin ( xc - width/2  );
    mExtent.setXmax ( xc + width/2  );
    mExtent.setYmin ( yc - height/2  );
    mExtent.setYmax ( yc + height/2  );
  }

  std::cout << "mUserExtent = " << mUserExtent.stringRep().toLocal8Bit().data() << std::endl;
  std::cout << "mScale = " << mScale << std::endl;
  std::cout << "mExtent = " << mExtent.stringRep().toLocal8Bit().data() << std::endl;

  setOptions();
  mCacheUpdated = false;
}

void QgsComposerMap::on_mFrameCheckBox_clicked ( )
{
    mFrame = mFrameCheckBox->isChecked();
    QGraphicsRectItem::update();
    QGraphicsRectItem::scene()->update();

    writeSettings();
}


void QgsComposerMap::setOptions ( void )
{ 
  std::cout << "QgsComposerMap::setOptions" << std::endl;
    
  mNameLabel->setText ( mName );
    
  mCalculateComboBox->setCurrentItem( mCalculate );
    
  mWidthLineEdit->setText ( QString("%1").arg( mComposition->toMM((int)QGraphicsRectItem::rect().width()), 0,'g') );
  mHeightLineEdit->setText ( QString("%1").arg( mComposition->toMM((int)QGraphicsRectItem::rect().height()),0,'g') );
    
  // Scale
  switch ( mComposition->mapCanvas()->mapUnits() ) {
    case QGis::METERS :
    case QGis::FEET :
      mScaleLineEdit->setText ( QString("%1").arg((int)mUserScale) );
      break;
    case QGis::DEGREES :
    case QGis::UNKNOWN :
      mScaleLineEdit->setText ( QString("%1").arg(mUserScale,0,'f') );
      break;
  }
  if ( mCalculate == Scale ) {
    mScaleLineEdit->setEnabled(false);  
  } else {
    mScaleLineEdit->setEnabled(true); 
  }
    
  mWidthScaleLineEdit->setText ( QString("%1").arg(mWidthScale,0,'g',2) );
  mSymbolScaleLineEdit->setText ( QString("%1").arg(mSymbolScale,0,'g',2) );
  mFontScaleLineEdit->setText ( QString("%1").arg(mFontScale,0,'g',2) );

  mFrameCheckBox->setChecked ( mFrame );
    
  mPreviewModeComboBox->setCurrentItem( mPreviewMode );
}

void QgsComposerMap::on_mSetCurrentExtentButton_clicked ( void )
{ 
    mUserExtent = mMapCanvas->extent();
    recalculate();
    QGraphicsRectItem::update();
    QGraphicsRectItem::scene()->update();
    setOptions();
    writeSettings();
    mComposition->emitMapChanged ( mId );
}

void QgsComposerMap::setSelected (  bool s ) 
{
    mSelected = s;
    QGraphicsRectItem::update(); //re-paint, so we show the highlight boxes
}    

bool QgsComposerMap::selected( void )
{
    return mSelected;
}

void QgsComposerMap::setCacheUpdated ( bool u ) 
{
    mCacheUpdated = u;
}    

double QgsComposerMap::scale ( void ) { return mScale; }

QWidget *QgsComposerMap::options ( void )
{
    setOptions ();
    return ( dynamic_cast <QWidget *> (this) );
}

QString QgsComposerMap::name ( void ) 
{
    return mName;
}

double QgsComposerMap::widthScale (void ) { return mWidthScale ; }
double QgsComposerMap::symbolScale (void ) { return mSymbolScale ; }
double QgsComposerMap::fontScale (void ) { return mFontScale ; }

bool QgsComposerMap::writeSettings ( void )  
{
  QString path;
  path.sprintf("/composition_%d/map_%d/", mComposition->id(), mId ); 

  QgsProject::instance()->writeEntry( "Compositions", path+"x", mComposition->toMM((int)QGraphicsRectItem::pos().x()) );
  QgsProject::instance()->writeEntry( "Compositions", path+"y", mComposition->toMM((int)QGraphicsRectItem::pos().y()) );


  QgsProject::instance()->writeEntry( "Compositions", path+"width", mComposition->toMM((int)QGraphicsRectItem::rect().width()) );
  QgsProject::instance()->writeEntry( "Compositions", path+"height", mComposition->toMM((int)QGraphicsRectItem::rect().height()) );

  if ( mCalculate == Scale ) {
      QgsProject::instance()->writeEntry( "Compositions", path+"calculate", QString("scale") );
  } else {
      QgsProject::instance()->writeEntry( "Compositions", path+"calculate", QString("extent") );
  }
    
  QgsProject::instance()->writeEntry( "Compositions", path+"north", mUserExtent.yMax() );
  QgsProject::instance()->writeEntry( "Compositions", path+"south", mUserExtent.yMin() );
  QgsProject::instance()->writeEntry( "Compositions", path+"east", mUserExtent.xMax() );
  QgsProject::instance()->writeEntry( "Compositions", path+"west", mUserExtent.xMin() );

  QgsProject::instance()->writeEntry( "Compositions", path+"scale", mUserScale );

  QgsProject::instance()->writeEntry( "Compositions", path+"widthscale", mWidthScale );
  QgsProject::instance()->writeEntry( "Compositions", path+"symbolscale", mSymbolScale );
  QgsProject::instance()->writeEntry( "Compositions", path+"fontscale", mFontScale );

  QgsProject::instance()->writeEntry( "Compositions", path+"frame", mFrame );

  QgsProject::instance()->writeEntry( "Compositions", path+"previewmode", mPreviewMode );

  return true; 
}

bool QgsComposerMap::readSettings ( void )
{
  bool ok;
  QString path;
  path.sprintf("/composition_%d/map_%d/", mComposition->id(), mId );
    
  double x =  mComposition->fromMM(QgsProject::instance()->readDoubleEntry( "Compositions", path+"x", 0, &ok));
  double y = mComposition->fromMM(QgsProject::instance()->readDoubleEntry( "Compositions", path+"y", 0, &ok));
  int w = mComposition->fromMM(QgsProject::instance()->readDoubleEntry( "Compositions", path+"width", 100, &ok)) ;
  int h = mComposition->fromMM(QgsProject::instance()->readDoubleEntry( "Compositions", path+"height", 100, &ok)) ;
  QGraphicsRectItem::setRect(0, 0, w, h);
  QGraphicsRectItem::setPos(x, y);

  QString calculate = QgsProject::instance()->readEntry("Compositions", path+"calculate", "scale", &ok);
  if ( calculate == "extent" )
  {
    mCalculate = Extent;
  }else
  {
    mCalculate = Scale;
  }

  mUserExtent.setYmax ( QgsProject::instance()->readDoubleEntry( "Compositions", path+"north", 100, &ok) );
  mUserExtent.setYmin ( QgsProject::instance()->readDoubleEntry( "Compositions", path+"south", 0, &ok) );
  mUserExtent.setXmax ( QgsProject::instance()->readDoubleEntry( "Compositions", path+"east", 100, &ok) );
  mUserExtent.setXmin ( QgsProject::instance()->readDoubleEntry( "Compositions", path+"west", 0, &ok) );

  mUserScale =  QgsProject::instance()->readDoubleEntry( "Compositions", path+"scale", 1000., &ok);
  mScale = scaleFromUserScale ( mUserScale );

  mWidthScale = QgsProject::instance()->readDoubleEntry("Compositions", path+"widthscale", 1., &ok);
  mSymbolScale = QgsProject::instance()->readDoubleEntry("Compositions", path+"symbolscale", 1., &ok);
  mFontScale = QgsProject::instance()->readDoubleEntry("Compositions", path+"fontscale", 1., &ok);
    
  mFrame = QgsProject::instance()->readBoolEntry("Compositions", path+"frame", true, &ok);
    
  mPreviewMode = (PreviewMode) QgsProject::instance()->readNumEntry("Compositions", path+"previewmode", Cache, &ok);
    
  recalculate();

  return true;
}

bool QgsComposerMap::removeSettings ( void )
{
    QString path;
    path.sprintf("/composition_%d/map_%d", mComposition->id(), mId );
    return QgsProject::instance()->removeEntry ( "Compositions", path );
}

bool QgsComposerMap::writeXML( QDomNode & node, QDomDocument & document, bool temp )
{
    return true;
}

bool QgsComposerMap::readXML( QDomNode & node )
{
    return true;
}
