#ifndef EDITOR_H
#define EDITOR_H

#include <QWidget>
#include <QtUiPlugin/QDesignerExportWidget>
namespace Ui {
class editor;
}


class QDESIGNER_WIDGET_EXPORT editor : public QWidget
{
    Q_OBJECT

public:
    explicit editor(QWidget *parent = nullptr);
    ~editor();

private:
    Ui::editor *ui;
};

#endif // EDITOR_H
