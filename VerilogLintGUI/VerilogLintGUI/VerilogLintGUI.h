#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VerilogLintGUI.h"

class VerilogLintGUI : public QMainWindow
{
    Q_OBJECT

public:
    VerilogLintGUI(QWidget *parent = Q_NULLPTR);

private:
    Ui::VerilogLintGUIClass ui;
};
