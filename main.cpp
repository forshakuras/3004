
#include "entrywindow.h"
#include <QApplication>




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Entrywindow w;
    w.show();

    return a.exec();
}
