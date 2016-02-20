#include "followlinemonitor.h"
#include <QtWidgets/QApplication>
#include <qsplashscreen.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QPixmap pixmap(":/FollowLineMonitor/Resources/boot.png");
	QSplashScreen splash(pixmap);
	splash.show();
	a.processEvents();


	FollowLineMonitor w;
	w.show();

	splash.finish(&w);
	return a.exec();
}
