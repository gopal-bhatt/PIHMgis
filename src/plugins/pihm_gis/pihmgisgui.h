/***************************************************************************
 *   Copyright (C) 2003 by Tim Sutton                                      *
 *   tim@linfiniti.com                                                     *
 *                                                                         *
 *   This is a plugin generated from the QGIS plugin template              *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/
#ifndef PIHMgisGUI_H
#define PIHMgisGUI_H

#include <QDialog>
#include <ui_pihmgisgui.h>

/**
@author Tim Sutton
*/
class PIHMgisGui : public QDialog, private Ui::PIHMgisGui
{
Q_OBJECT
public:
    PIHMgisGui( QWidget* parent = 0, Qt::WFlags fl = 0 );
    ~PIHMgisGui();

private:
    static const int context_id = 0;

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_buttonBox_helpRequested();

};

#endif
