#include "editor.h"
#include "codeeditorplugin.h"

#include <QtPlugin>

CodeEditorPlugin::CodeEditorPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void CodeEditorPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool CodeEditorPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *CodeEditorPlugin::createWidget(QWidget *parent)
{
    return new editor(parent);
}

QString CodeEditorPlugin::name() const
{
    return QLatin1String("CodeEditor");
}

QString CodeEditorPlugin::group() const
{
    return QLatin1String("Plugins");
}

QIcon CodeEditorPlugin::icon() const
{
    return QIcon(QLatin1String(":/editor.png"));
}

QString CodeEditorPlugin::toolTip() const
{
    return QLatin1String("源码编辑器");
}

QString CodeEditorPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool CodeEditorPlugin::isContainer() const
{
    return false;
}

QString CodeEditorPlugin::domXml() const
{
    return QLatin1String("<widget class=\"CodeEditor\" name=\"codeEditor\">\n</widget>\n");
}

QString CodeEditorPlugin::includeFile() const
{
    return QLatin1String("codeeditor.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(codeeditorplugin, CodeEditorPlugin)
#endif // QT_VERSION < 0x050000
