/***************************************************************************
                         qgsuniquevaluedialog.h  -  description
                             -------------------
    begin                : July 2004
    copyright            : (C) 2004 by Marco Hugentobler
    email                : marco.hugentobler@autoform.ch
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
/* $Id: qgsuniquevaluedialog.h 6472 2007-01-29 08:00:18Z mhugent $ */

#ifndef QGSUNIQUEVALUEDIALOG_H
#define QGSUNIQUEVALUEDIALOG_H

#include "ui_qgsuniquevaluedialogbase.h"
#include "qgssinglesymboldialog.h"
#include <map>

class QgsVectorLayer;


class QgsUniqueValueDialog: public QDialog, private Ui::QgsUniqueValueDialogBase
{
    Q_OBJECT
 public:
    QgsUniqueValueDialog(QgsVectorLayer* vl);
    ~QgsUniqueValueDialog();

 public slots:
     void apply();

 protected:
    /**Pointer to the associated vector layer*/
    QgsVectorLayer* mVectorLayer;
    /**Set to store the already entered values*/
    std::map<QString,QgsSymbol*> mValues;
    QgsSingleSymbolDialog sydialog;
    /**Value for which symbology settings are displayed*/
    QString currentValue;

 protected slots:
    /**Set new attribut for classification*/
    void changeClassificationAttribute();
    /**Changes the display of the single symbol dialog*/
    void changeCurrentValue();
    /**Removes a class from the classification*/
    void deleteCurrentClass();
    /**Writes changes in the single symbol dialog to the corresponding QgsSymbol*/
    void applySymbologyChanges();
};

#endif