/***************************************************************************
                         qgsgraduatedsymboldialog.cpp  -  description
                             -------------------
    begin                : Oct 2003
    copyright            : (C) 2003 by Marco Hugentobler
    email                : mhugent@geo.unizh.ch
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
/* $Id: qgsgraduatedsymboldialog.cpp 7066 2007-07-07 07:53:35Z mhugent $ */

#include "qgsgraduatedsymboldialog.h"
#include "qgsfield.h"
#include "qgsgraduatedsymbolrenderer.h"
#include "qgsludialog.h"
#include "qgssymbol.h"
#include "qgsvectordataprovider.h"
#include "qgsvectorlayer.h"
#include <algorithm>
#include <cmath>


QgsGraduatedSymbolDialog::QgsGraduatedSymbolDialog(QgsVectorLayer * layer): QDialog(), mVectorLayer(layer), sydialog(layer)
{
    setupUi(this);
#ifdef QGISDEBUG
    qWarning("constructor QgsGraduatedSymbolDialog");
#endif

    setOrientation(Qt::Vertical);
    setSizeGripEnabled(true);

    //find out the numerical fields of mVectorLayer
    QgsVectorDataProvider *provider = mVectorLayer->getDataProvider();
    if (provider)
    {
	const QgsFieldMap & fields = provider->fields();
	QString str;
	
	for (QgsFieldMap::const_iterator it = fields.begin(); 
             it != fields.end(); 
             ++it)
        {
	    QVariant::Type type = (*it).type();
	    if (type == QVariant::Int || type == QVariant::Double)
            {
	      classificationComboBox->insertItem(it->name());
	      mFieldMap.insert(std::make_pair(it->name(), it.key()));
            }
        }
    } 
    else
    {
	qWarning("Warning, data provider is null in QgsGraduatedSymbolDialog::QgsGraduatedSymbolDialog(...)");
	return;
    }

    modeComboBox->insertItem("Equal Interval");
    modeComboBox->insertItem("Quantiles");
    modeComboBox->insertItem("Empty");
    
    //restore the correct settings
    const QgsGraduatedSymbolRenderer* renderer = dynamic_cast < const QgsGraduatedSymbolRenderer * >(layer->renderer());
    
    if (renderer)
    {
	QList < QgsSymbol * >list = renderer->symbols();
	
	//display the classification field
	QString classfield="";
	for(std::map<QString,int>::iterator it=mFieldMap.begin();it!=mFieldMap.end();++it)
	{
	    if(it->second==renderer->classificationField())
	    {
		classfield=it->first;
		break;
	    }
	}
	classificationComboBox->setCurrentText(classfield);

	numberofclassesspinbox->setValue(list.size());
	//fill the items of the renderer into mValues
	for(QList<QgsSymbol*>::iterator it=list.begin();it!=list.end();++it)
	{
	    //todo: make an assignment operator and a copy constructor for QgsSymbol
		QString classbreak=(*it)->lowerValue()+" - "+(*it)->upperValue();
		QgsSymbol* sym=new QgsSymbol(mVectorLayer->vectorType(), (*it)->lowerValue(), (*it)->upperValue(), (*it)->label());
		sym->setPen((*it)->pen());
		sym->setCustomTexture((*it)->customTexture());
		sym->setBrush((*it)->brush());
		sym->setNamedPointSymbol((*it)->pointSymbolName());
		sym->setPointSize((*it)->pointSize());
		mEntries.insert(std::make_pair(classbreak,sym));
		mClassListWidget->addItem(classbreak);
	}
	
    }
    
    //do the necessary signal/slot connections
    QObject::connect(mClassifyButton, SIGNAL(clicked()), this, SLOT(adjustClassification()));
    QObject::connect(mClassListWidget, SIGNAL(currentItemChanged(QListWidgetItem*, QListWidgetItem*)), this, SLOT(changeCurrentValue()));
    QObject::connect(&sydialog, SIGNAL(settingsChanged()), this, SLOT(applySymbologyChanges()));
    QObject::connect(mClassListWidget, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(modifyClass(QListWidgetItem*)));
    QObject::connect(mDeleteClassButton, SIGNAL(clicked()), this, SLOT(deleteCurrentClass()));

    mSymbolWidgetStack->addWidget(&sydialog);
    mSymbolWidgetStack->setCurrentWidget(&sydialog); 

    mClassListWidget->setCurrentRow(0);
}

QgsGraduatedSymbolDialog::QgsGraduatedSymbolDialog(): QDialog(), mVectorLayer(0), sydialog(0)
{
    setupUi(this);
#ifdef QGISDEBUG
    qWarning("constructor QgsGraduatedSymbolDialog");
#endif
}

QgsGraduatedSymbolDialog::~QgsGraduatedSymbolDialog()
{
#ifdef QGISDEBUG
    qWarning("destructor QgsGraduatedSymbolDialog");
#endif
}

void QgsGraduatedSymbolDialog::adjustNumberOfClasses()
{
    //find out the number of the classification field
    QString fieldstring = classificationComboBox->currentText();
    
    if (fieldstring.isEmpty())    //don't do anything, it there is no classification field
    {
	show();
	return;
    }
    
    std::map < QString, int >::iterator iter = mFieldMap.find(fieldstring);
}

void QgsGraduatedSymbolDialog::apply()
{
	if (classificationComboBox->currentText().isEmpty())  //don't do anything, it there is no classification field
        {
	    return;
        }
	
	QgsGraduatedSymbolRenderer* renderer = new QgsGraduatedSymbolRenderer(mVectorLayer->vectorType());

	for (int item=0;item<mClassListWidget->count();++item)
        {
	  QString classbreak=mClassListWidget->item(item)->text();
	  std::map<QString,QgsSymbol*>::iterator it=mEntries.find(classbreak);
	  if(it==mEntries.end())
	    {
	      continue;
	    }
	  
	  QString lower_bound=it->second->lowerValue();
	  QString upper_bound=it->second->upperValue();
	  QString label=it->second->label();
	  
	  QgsSymbol* sy = new QgsSymbol(mVectorLayer->vectorType(), lower_bound, upper_bound, label);
	  
	  sy->setColor(it->second->pen().color());
	  sy->setLineStyle(it->second->pen().style());
	  sy->setLineWidth(it->second->pen().width());
	  
	  if (mVectorLayer->vectorType() == QGis::Point)
	    {
	      sy->setNamedPointSymbol(it->second->pointSymbolName());
	      sy->setPointSize(it->second->pointSize());
	      
	    }
	  
	  if (mVectorLayer->vectorType() != QGis::Line)
            {
	      sy->setFillColor(it->second->brush().color());
	      sy->setCustomTexture(it->second->customTexture());//necessary?
	      sy->setFillStyle(it->second->brush().style());
            }
	  
	  //test, if lower_bound is numeric or not (making a subclass of QString would be the proper solution)
	  bool lbcontainsletter = false;
	  for (int j = 0; j < lower_bound.length(); j++)
            {
	      if (lower_bound.ref(j).isLetter())
                {
		  lbcontainsletter = true;
                }
            }
	  
	  //test, if upper_bound is numeric or not (making a subclass of QString would be the proper solution)
	  bool ubcontainsletter = false;
	  for (int j = 0; j < upper_bound.length(); j++)
            {
	      if (upper_bound.ref(j).isLetter())
                {
		  ubcontainsletter = true;
                }
            }
	  if (lbcontainsletter == false && ubcontainsletter == false && lower_bound.length() > 0 && upper_bound.length() > 0) //only add the item if the value bounds do not contain letters and are not null strings
            {
	      renderer->addSymbol(sy);
	    }
	  else
	    {
	      delete sy;
	    }
        }
	
	std::map<QString,int>::iterator iter=mFieldMap.find(classificationComboBox->currentText());
	if(iter!=mFieldMap.end())
	  {
	    renderer->setClassificationField(iter->second);
	  }
	mVectorLayer->setRenderer(renderer);
}

void QgsGraduatedSymbolDialog::adjustClassification()
{
    mClassListWidget->clear();
    QGis::VectorType m_type = mVectorLayer->vectorType();
    QgsVectorDataProvider *provider = dynamic_cast<QgsVectorDataProvider *>(mVectorLayer->getDataProvider());
    double minimum = 0;
    double maximum = 0;
    
    //delete all previous entries
    for(std::map<QString, QgsSymbol*>::iterator it=mEntries.begin();it!=mEntries.end();++it)
    {
	delete it->second;
    }
    mEntries.clear();

    //find out the number of the classification field
    QString fieldstring = classificationComboBox->currentText();

    if (fieldstring.isEmpty())    //don't do anything, it there is no classification field
    {
	show();
	return;
    }
    
    std::map < QString, int >::iterator iter = mFieldMap.find(fieldstring);
    int field = iter->second;


    if (provider)
    {
	if (modeComboBox->currentText() == "Equal Interval")
	{
	    minimum = provider->minValue(field).toDouble();
	    maximum = provider->maxValue(field).toDouble();
	} 
	else                    //don't waste performance if mMode is QgsGraduatedSymbolDialog::EMPTY
	{
	    minimum = 0;
	    maximum = 0;
	}
    }

    //todo: setup a data structure which holds the symbols
    std::list<QgsSymbol*> symbolList;
    for(int i = 0; i < numberofclassesspinbox->value(); ++i)
      {
	QgsSymbol* symbol = new QgsSymbol(m_type);
	symbol->setLabel("");
	QPen pen;
	QBrush brush;

	//apply a nice color range from red to green as default
	//todo: make other color ranges available
	if (i == 0)
	  {
	    if (m_type == QGis::Line)
	      {
		pen.setColor(QColor(255, 0, 0));
	      } 
	    else                //point or polygon
	      {
		brush.setColor(QColor(255, 0, 0));
		pen.setColor(Qt::black);
	      }
	  } 
	else
	  {
	    if (m_type == QGis::Line)
	      {
		pen.setColor(QColor(255 - (255 / numberofclassesspinbox->value() * (i+1)), 255 / numberofclassesspinbox->value() * (i+1), 0));
	      } 
	    else                //point or polygon
	      {
		brush.setColor(QColor(255 - (255 / numberofclassesspinbox->value() * (i+1)), 255 / numberofclassesspinbox->value() * (i+1), 0));  
		pen.setColor(Qt::black);
	      }
	  }
	pen.setWidth(1);
	brush.setStyle(Qt::SolidPattern);
	symbol->setPen(pen);
	symbol->setBrush(brush);
	symbolList.push_back(symbol);
      }

    QString listBoxText;
    if(modeComboBox->currentText() == "Quantiles")
      {
	//test: insert the values into mClassListWidget
	std::list<double> quantileBorders;
	quantilesFromVectorLayer(quantileBorders, field, numberofclassesspinbox->value());

	std::list<double>::const_iterator it;
	std::list<double>::const_iterator last_it = quantileBorders.end();
	std::list<QgsSymbol*>::const_iterator symbol_it = symbolList.begin();
	for(it = quantileBorders.begin(); it != quantileBorders.end(); ++it)
	  {
	    if(last_it != quantileBorders.end())
	      {
		listBoxText = QString::number(*last_it, 'f') + " - " + QString::number(*it, 'f');
		mClassListWidget->addItem(listBoxText);
		(*symbol_it)->setLowerValue(QString::number(*last_it, 'f'));
		(*symbol_it)->setUpperValue(QString::number(*it, 'f'));
		mEntries.insert(std::make_pair(listBoxText,*symbol_it));
		++symbol_it;
	      }
	    last_it = it;
	  }
      }
    else if(modeComboBox->currentText() == "Equal Interval")
      {
	std::list<QgsSymbol*>::const_iterator symbol_it = symbolList.begin();
	for(int i=0;i<numberofclassesspinbox->value();++i)
	  {
	    double lower=minimum + (maximum - minimum) / numberofclassesspinbox->value() * i;
	    double upper=minimum + (maximum - minimum) / numberofclassesspinbox->value() * (i+1);
	    if(i==0)//make sure all feature attributes are between minimum and maximum value (round off problem)
	      {
		lower-=0.001;
	      }
	    if(i==numberofclassesspinbox->value()-1)
	      {
		upper+=0.001;
	      }
	    (*symbol_it)->setLowerValue(QString::number(lower,'f',3));
	    (*symbol_it)->setUpperValue(QString::number(upper,'f',3));
	    listBoxText=QString::number(lower,'f',3)+" - " +QString::number(upper,'f',3);
	    mClassListWidget->addItem(listBoxText);
	    
	    mEntries.insert(std::make_pair(listBoxText,*symbol_it));
	    ++symbol_it;
	  }
      }
    else if(modeComboBox->currentText() == "Empty")
      {
	std::list<QgsSymbol*>::const_iterator symbol_it = symbolList.begin();
	for(int i=0;i<numberofclassesspinbox->value();++i)
	  {
	    listBoxText="Empty"+QString::number(i+1);
	    mClassListWidget->addItem(listBoxText);
	    mEntries.insert(std::make_pair(listBoxText,*symbol_it));
	    ++symbol_it;
	  }
      }
    
    mClassListWidget->setCurrentRow(0);
}

void QgsGraduatedSymbolDialog::changeCurrentValue()
{
    sydialog.blockSignals(true);//block signals to prevent sydialog from changing the current QgsRenderItem
    QListWidgetItem* item=mClassListWidget->currentItem();
    if(item)
    {
	QString value=item->text();
	std::map<QString,QgsSymbol*>::iterator it=mEntries.find(value);
	if(it!=mEntries.end())
	{
	    sydialog.set((*it).second);
	    sydialog.setLabel((*it).second->label());
	}
    }
    sydialog.blockSignals(false);
}

void QgsGraduatedSymbolDialog::applySymbologyChanges()
{
    QListWidgetItem* item=mClassListWidget->currentItem();
    if(item)
    {
	QString value=item->text();
	std::map<QString,QgsSymbol*>::iterator it=mEntries.find(value);
	if(it!=mEntries.end())
	{
	    sydialog.apply((*it).second);
	    it->second->setLabel((*it).second->label());
	}
    }
}

void QgsGraduatedSymbolDialog::modifyClass(QListWidgetItem* item)
{
    QString currenttext=item->text();
    QgsSymbol* symbol=0;
    std::map<QString,QgsSymbol*>::iterator iter=mEntries.find(currenttext);
    if(iter!=mEntries.end())
    {
	symbol=iter->second;
    }
    QgsLUDialog dialog(this);
    
    if(symbol)
    {
	dialog.setLowerValue(symbol->lowerValue());
	dialog.setUpperValue(symbol->upperValue());
    }

    if(dialog.exec()==QDialog::Accepted)
    {
	if(symbol)
	{
	    mEntries.erase(currenttext);
	    symbol->setLowerValue(dialog.lowerValue());
	    symbol->setUpperValue(dialog.upperValue());
	    QString newclass=dialog.lowerValue()+"-"+dialog.upperValue();
	    mEntries.insert(std::make_pair(newclass,symbol));
	    item->setText(newclass);
	}	
    }
}

void QgsGraduatedSymbolDialog::deleteCurrentClass()
{
  QListWidgetItem* currentItem = mClassListWidget->currentItem();
  if(!currentItem)
    {
      return;
    }

  QString classValue = currentItem->text();
  int currentIndex = mClassListWidget->currentRow();
  mEntries.erase(classValue);
  delete (mClassListWidget->takeItem(currentIndex));
  qWarning("numRows: ");
  qWarning(QString::number(mClassListWidget->count()));
  //
  if(mClassListWidget->count() < (currentIndex + 1))
    {
      qWarning("selecting numRows - 1");
      mClassListWidget->setCurrentRow(mClassListWidget->count() - 1);
    }
  else
    {
      qWarning("selecting currentIndex");
      mClassListWidget->setCurrentRow(currentIndex);
    }
}

int QgsGraduatedSymbolDialog::quantilesFromVectorLayer(std::list<double>& result, int attributeIndex, int numQuantiles) const
{
  if(mVectorLayer)
    {
      QgsVectorDataProvider* provider = mVectorLayer->getDataProvider();
  
      if(provider)
	{
	  std::vector<double> attributeValues(provider->featureCount());
	  QgsAttributeList attList;
	  attList.push_back(attributeIndex);
	  QgsFeature currentFeature;
	  QgsAttributeMap currentAttributeMap;
	  double currentValue;
	  int index = 0;
	  
	  provider->select(attList, QgsRect(), false);
	  while(provider->getNextFeature(currentFeature))
	    {
	      currentAttributeMap = currentFeature.attributeMap();
	      currentValue = currentAttributeMap[attributeIndex].toDouble();
	      attributeValues[index] = currentValue;
	      ++index;
	    }

	  sort(attributeValues.begin(), attributeValues.end());
	  return calculateQuantiles(result, attributeValues, numQuantiles);
	}
    }
  return 1;
}

int QgsGraduatedSymbolDialog::calculateQuantiles(std::list<double>& result, const std::vector<double>& values, int numQuantiles) const
{
  result.clear();

  double q;
  double k;
  double intPart;

  result.push_back(values[0]);
  for(int i = 0; i < (numQuantiles - 1); ++i)
    {
      q = 100/numQuantiles * (i + 1);
      k = values.size() * q / 100;
      if(std::modf(k, &intPart) < 0.000000001)
	{
	  result.push_back(((100 - q) * values[(int)(k - 1)] + q * values[(int)k]) / 100);
	}
      else
	{
	  result.push_back(values[(int)k]);
	}
    }
  result.push_back(values[values.size() - 1]);
  return 0;
}


