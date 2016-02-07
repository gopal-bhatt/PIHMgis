#ifndef IOPROJECTFILE_H
#define IOPROJECTFILE_H

#include <QtGui>
#include <QString>

QStringList ReadModuleLine (QString ProjectFileName, QString Module);
bool        WriteModuleLine(QString ProjectFileName, QStringList WriteStringList);
bool        DeleteModuleLine(QString ProjectFileName, QString Module);

bool        CheckFileAccess (QString FileName, QString AccessMode);

QString readLineNumber (QString ProjectFileName, int LineNumber);
bool    writeLineNumber(QString ProjectFileName, int LineNumber, QString WriteString);


#endif
