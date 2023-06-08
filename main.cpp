#include <QApplication>
#include <QPushButton>
#include <QThread>


#include "ui/loginwidget.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    LoginWidget w;
    w.show();
    return QApplication::exec();
}
