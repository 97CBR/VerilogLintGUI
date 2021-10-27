#include "VerilogLintGUI.h"

VerilogLintGUI::VerilogLintGUI(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    setWindowIcon(QIcon(":/VerilogLintGUI/Resource/icon.png"));
}
