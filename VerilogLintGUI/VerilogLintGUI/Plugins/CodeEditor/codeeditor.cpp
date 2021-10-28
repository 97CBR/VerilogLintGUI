#include "codeeditor.h"
#include <QLabel>
#include <QHBoxLayout>

CodeEditor::CodeEditor(QWidget *parent) :
    QWidget(parent)
{
    QLabel *label = new QLabel("MyLabel");
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addWidget(label);
    this->setLayout(mainLayout);
}
