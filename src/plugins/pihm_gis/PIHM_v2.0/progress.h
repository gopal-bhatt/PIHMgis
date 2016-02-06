#include <QtGui/QProgressBar>
#include <QtGui>

void setProgressBar(QProgressBar *bar, int value){
	bar->setValue(value);
	QApplication::processEvents();
}
