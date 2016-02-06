/***************************************************************************
                          qgslinestyledialog.h 
               Dialog for selecting line style for vector layers
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
 /* $Id: qgslinestyledialog.h 6415 2007-01-09 02:39:15Z wonder $ */
#ifndef QGSLINESTYLEDIALOG_H
#define QGSLINESTYLEDIALOG_H

class qnamespace;
#include "ui_qgslinestyledialogbase.h"
#include "qgisgui.h"
/**Dialog class to query line styles*/
class QgsLineStyleDialog: public QDialog, private Ui::QgsLineStyleDialogBase
{
  Q_OBJECT
 public:
    QgsLineStyleDialog(QWidget * parent = 0, Qt::WFlags fl = QgisGui::ModalDialogFlags);
    ~QgsLineStyleDialog();
    Qt::PenStyle style();
 protected:
    Qt::PenStyle m_style;
 protected slots:
     /**Queries the selected style if the ok button is pressed and stores it in m_style*/
     void queryStyle();
};

inline QgsLineStyleDialog::~QgsLineStyleDialog()
{

}

#endif