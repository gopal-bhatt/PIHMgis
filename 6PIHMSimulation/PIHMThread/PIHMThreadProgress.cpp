#include "PIHMThreadProgress.h"

void PIHMThreadProgress(QProgressBar *MyProgressBar, int MyProgress)
{
        MyProgressBar->setValue( MyProgress );
        QApplication::processEvents();
        return;
}
