#include "avscanner.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AVScanner w;
    w.show();

    return a.exec();
}
