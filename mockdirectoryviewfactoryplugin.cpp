#include "mockdirectoryviewfactoryplugin.h"
#include "mockupdirectoryview.h"

MockDirectoryViewFactoryPlugin::MockDirectoryViewFactoryPlugin(QObject *parent)
    : Peony::DirectoryViewPluginIface2()
{
}

Peony::PluginInterface::PluginType MockDirectoryViewFactoryPlugin::pluginType()
{
    return Peony::PluginInterface::DirectoryViewPlugin2;
}

const QString MockDirectoryViewFactoryPlugin::name()
{
    return "Mock Directory View";
}

const QString MockDirectoryViewFactoryPlugin::description()
{
    return "A directory view plugin demo";
}

const QIcon MockDirectoryViewFactoryPlugin::icon()
{
    return QIcon::fromTheme("folder");
}

void MockDirectoryViewFactoryPlugin::setEnable(bool enable)
{

}

bool MockDirectoryViewFactoryPlugin::isEnable()
{
    return true;
}

QString MockDirectoryViewFactoryPlugin::viewIdentity()
{
    return name();
}

QString MockDirectoryViewFactoryPlugin::viewName()
{
    return name();
}

QIcon MockDirectoryViewFactoryPlugin::viewIcon()
{
    return icon();
}

bool MockDirectoryViewFactoryPlugin::supportUri(const QString &uri)
{
    return uri == "mockup:///";
}

int MockDirectoryViewFactoryPlugin::zoom_level_hint()
{
    return -1;
}

int MockDirectoryViewFactoryPlugin::minimumSupportedZoomLevel()
{
    return -1;
}

int MockDirectoryViewFactoryPlugin::maximumSupportedZoomLevel()
{
    return -1;
}

int MockDirectoryViewFactoryPlugin::priority(const QString &directoryUri)
{
    if (supportUri(directoryUri))
        return 999;
    return -999;
}

bool MockDirectoryViewFactoryPlugin::supportZoom()
{
    return false;
}

Peony::DirectoryViewWidget *MockDirectoryViewFactoryPlugin::create()
{
    return new MockupDirectoryView;
}
