#include "qt_editor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qt_editor w;
    w.show();
    return a.exec();
}
