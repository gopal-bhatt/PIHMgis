#include <qfile.h>
QString getHomeDir(){
		std::system("echo $HOME 1>homeDir.dat");
		QFile file("homeDir.dat");
		QString homeDir;
		if(!file.open(QIODevice::ReadOnly))
				return homeDir;
		QTextStream stream(&file);
		homeDir = stream.readLine();
		return homeDir;
}
