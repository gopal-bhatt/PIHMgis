/***************************************************************************
                          qgspatterndialog 
            Dialog for selecting pattern for rendering vector layers
                             -------------------
    begin                : 2004-02-12
    copyright            : (C) 2004 by Gary E.Sherman
    email                : sherman at mrcc.com
***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
 /* $Id: qgspatterndialog.h 6415 2007-01-09 02:39:15Z wonder $ */
#ifndef QGSPATTERNDIALOG_H
#define QGSPATTERNDIALOG_H

class qnamespace;
#include "ui_qgspatterndialogbase.h"
#include "qgisgui.h"

/**A dialog class to query the fill pattern.*/
class QgsPatternDialog: public QDialog, private Ui::QgsPatternDialogBase
{
    Q_OBJECT
 public:
    QgsPatternDialog(QWidget * parent = 0, Qt::WFlags fl = QgisGui::ModalDialogFlags);
    ~QgsPatternDialog();
    Qt::BrushStyle pattern();
 protected:
    Qt::BrushStyle m_pattern;
 protected slots:
     /**Queries the selected pattern if the ok button is pressed and stores the pattern in m_pattern*/
     void queryPattern();
};

inline QgsPatternDialog::~QgsPatternDialog()
{

}

#endif