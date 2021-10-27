#include "VerilogLintGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VerilogLintGUI w;
    w.show();
    return a.exec();
}
