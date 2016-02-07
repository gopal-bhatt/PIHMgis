#include "IOProjectFile.h"

#include <QtGui>
#include <QString>


QStringList ReadModuleLine(QString ProjectFileName, QString Module)
{
    QFile ProjectFile(ProjectFileName);
    ProjectFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream ProjectFileTextStream(&ProjectFile);

    QString ProjectFileLineString;
    QStringList ProjectFileLineStringList;

    while ( ! ProjectFileTextStream.atEnd() )
    {
        ProjectFileLineString     = ProjectFileTextStream.readLine();
        ProjectFileLineStringList = ProjectFileLineString.split(",");

        if ( ProjectFileLineStringList.at(0) == Module )
            return ProjectFileLineStringList;
    }

    QStringList NullStringList;
    return NullStringList;
}


bool WriteModuleLine(QString ProjectFileName, QStringList WriteStringList)
{
    QString Module;
    Module = WriteStringList.at(0);

    QString TempProjectFileName = QDir::homePath()+"/.PIHMgis/TempProjectFile.txt";

    QFile::remove(TempProjectFileName);
    if ( QFile::copy(ProjectFileName, TempProjectFileName) == false)
    {
        qDebug() << "ERROR: Unable to Copy Project File to Temporary Project File";
        return false;
    }

    QFile ProjectFile(ProjectFileName);
    ProjectFile.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream ProjectFileTextStream(&ProjectFile);

    QFile TempProjectFile(TempProjectFileName);
    TempProjectFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream TempProjectFileTextStream(&TempProjectFile);

    QString ProjectFileLineString;
    QStringList ProjectFileLineStringList;

    while ( ! TempProjectFileTextStream.atEnd() )
    {
        ProjectFileLineString     = TempProjectFileTextStream.readLine();
        ProjectFileLineStringList = ProjectFileLineString.split(",");

        if ( ProjectFileLineStringList.at(0) == Module )
        {
            ProjectFileTextStream << "#" << ProjectFileLineString << endl;
            break;
        }

        ProjectFileTextStream << ProjectFileLineString << endl;
    }

    for (int i=0 ; i<WriteStringList.size(); i++)
        ProjectFileTextStream << WriteStringList.at(i) << ",";
    ProjectFileTextStream << endl;

    while ( ! TempProjectFileTextStream.atEnd() )
        ProjectFileTextStream << TempProjectFileTextStream.readLine() << endl;

    QFile::remove(TempProjectFileName);
    return true;
}


bool DeleteModuleLine(QString ProjectFileName, QString Module)
{
    QString TempProjectFileName = QDir::homePath()+"/.PIHMgis/TempProjectFile.txt";

    QFile::remove(TempProjectFileName);
    if ( QFile::copy(ProjectFileName, TempProjectFileName) == false)
    {
        qDebug() << "ERROR: Unable to Copy Project File to Temporary Project File";
        return false;
    }

    QFile ProjectFile(ProjectFileName);
    ProjectFile.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream ProjectFileTextStream(&ProjectFile);

    QFile TempProjectFile(TempProjectFileName);
    TempProjectFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream TempProjectFileTextStream(&TempProjectFile);

    QString ProjectFileLineString;
    QStringList ProjectFileLineStringList;

    while ( ! TempProjectFileTextStream.atEnd() )
    {
        ProjectFileLineString     = TempProjectFileTextStream.readLine();
        ProjectFileLineStringList = ProjectFileLineString.split(",");

        if ( ProjectFileLineStringList.at(0) == Module )
            continue;

        ProjectFileTextStream << ProjectFileLineString << endl;
    }

    QFile::remove(TempProjectFileName);
    return true;
}


bool CheckFileAccess (QString FileName, QString AccessMode)
{
    QFile File;
    File.setFileName(FileName);

    if ( AccessMode == "ReadOnly" )
    {
        if ( ! File.open(QIODevice::ReadOnly | QIODevice::Text) )
            return false;
    }

    if ( AccessMode == "WriteOnly" )
    {
        if ( ! File.open(QIODevice::WriteOnly | QIODevice::Text) )
            return false;
    }

    if ( AccessMode == "ReadWrite" )
    {
        if ( ! File.open(QIODevice::ReadWrite | QIODevice::Text) )
            return false;
    }

    File.close();

    return true;
}


QString readLineNumber(QString ProjectFileName, int LineNumber)
{
	QString TempString;
	QFile ProjectFile(ProjectFileName);
	ProjectFile.open(QIODevice::ReadOnly | QIODevice::Text);
	QTextStream ProjectFileTextStream(&ProjectFile);

	for (int i=0; i<LineNumber; i++)
		TempString = ProjectFileTextStream.readLine();

	ProjectFile.close();

	return TempString;
}


bool writeLineNumber(QString ProjectFileName, int LineNumber, QString WriteString)
{
	bool success = false;
	
	int lineCount=0;
	QString TempString;

	QFile ProjectFile(ProjectFileName);
	ProjectFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream ProjectFileTextStream(&ProjectFile);
	
    QString TempProjectFileName = QDir::homePath()+"/.PIHMgis/TempProjectFile.txt";

	QFile TempProjectFile(TempProjectFileName);
	if ( ! TempProjectFile.open(QIODevice::WriteOnly | QIODevice::Text) )
		return success;

	QTextStream TempProjectFileTextStream(&TempProjectFile);

	while ( ! ProjectFileTextStream.atEnd() )
	{
		if(lineCount != 0)
		{
			TempString=ProjectFileTextStream.readLine();
			TempProjectFileTextStream <<"\n"<< TempString;
			lineCount++;
		}
		else
		{
			TempString=ProjectFileTextStream.readLine();
                        TempProjectFileTextStream << TempString;
			lineCount++;
		}
	}
	lineCount = 0;
	ProjectFile.close();
	TempProjectFile.close();


	//QFile inData2(QDir::homeDir()+"/.PIHMgis/TempProjectFile.txt");
	TempProjectFile.open(QIODevice::ReadOnly | QIODevice::Text);

	//QFile outData2(ProjectFileName);
	if ( ! ProjectFile.open(QIODevice::WriteOnly | QIODevice::Text) )
		return success;


	while ( ! TempProjectFileTextStream.atEnd() )
	{
		lineCount++;
		if(lineCount == LineNumber)
		{
			if(lineCount != 1)
			{
				TempString=TempProjectFileTextStream.readLine();
				ProjectFileTextStream <<"\n"<<WriteString;
			}
			else
			{
				TempString=TempProjectFileTextStream.readLine();
				ProjectFileTextStream <<WriteString;
			}
		}
		else
		{
			if(lineCount != 1)
			{
				TempString=TempProjectFileTextStream.readLine();
				ProjectFileTextStream <<"\n"<<TempString;
			}
			else
			{
				TempString=TempProjectFileTextStream.readLine();
				ProjectFileTextStream <<TempString;
			}
		}
	}
	qDebug() << lineCount;

	if(lineCount < LineNumber)
	{
		for(int i=lineCount; i<LineNumber; i++)
		{
			ProjectFileTextStream <<"\n";
		}
		ProjectFileTextStream <<WriteString;
	}

    TempProjectFile.close();
    ProjectFile.close();

// TODO remove TempProjectFileName

	success = true;
}
