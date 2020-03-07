#include "customdashboard.h"
#include "customdashboardplugin.h"

#include <QtPlugin>

CustomDashboardPlugin::CustomDashboardPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void CustomDashboardPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool CustomDashboardPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *CustomDashboardPlugin::createWidget(QWidget *parent)
{
    return new CustomDashboard(parent);
}

QString CustomDashboardPlugin::name() const
{
    return QLatin1String("CustomDashboard");
}

QString CustomDashboardPlugin::group() const
{
    return QLatin1String("");
}

QIcon CustomDashboardPlugin::icon() const
{
    return QIcon();
}

QString CustomDashboardPlugin::toolTip() const
{
    return QLatin1String("");
}

QString CustomDashboardPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool CustomDashboardPlugin::isContainer() const
{
    return false;
}

QString CustomDashboardPlugin::domXml() const
{
    return QLatin1String("<widget class=\"CustomDashboard\" name=\"customDashboard\">\n</widget>\n");
}

QString CustomDashboardPlugin::includeFile() const
{
    return QLatin1String("customdashboard.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(customdashboardplugin, CustomDashboardPlugin)
#endif // QT_VERSION < 0x050000
