#include "editor.h"
#include "ui_editor.h"

editor::editor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editor)
{
    ui->setupUi(this);
}

editor::~editor()
{
    delete ui;
}
