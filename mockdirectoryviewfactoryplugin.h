#ifndef MOCKDIRECTORYVIEWFACTORYPLUGIN_H
#define MOCKDIRECTORYVIEWFACTORYPLUGIN_H

#include <peony-qt/directory-view-plugin-iface2.h>

class MockDirectoryViewFactoryPlugin : public QObject,  public Peony::DirectoryViewPluginIface2
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID DirectoryViewPluginIface2_iid FILE "peony-directory-view-extension-demo.json")
    Q_INTERFACES(Peony::DirectoryViewPluginIface2)

public:
    explicit MockDirectoryViewFactoryPlugin(QObject *parent = nullptr);

private:
    // Peony::PluginIface need override
    virtual PluginType pluginType() override;
    virtual const QString name() override;
    virtual const QString description() override;
    virtual const QIcon icon() override;
    virtual void setEnable(bool enable) override;
    virtual bool isEnable() override;

    // Peony::DirectoryViewPluginIface2 need override
    virtual QString viewIdentity() override;
    virtual QString viewName() override;
    virtual QIcon viewIcon() override;
    virtual bool supportUri(const QString &uri) override;

    virtual int zoom_level_hint() override;
    virtual int minimumSupportedZoomLevel() override;
    virtual int maximumSupportedZoomLevel() override;

    virtual int priority(const QString &directoryUri) override;
    virtual bool supportZoom() override;

    virtual Peony::DirectoryViewWidget *create() override;
};

#endif // MOCKDIRECTORYVIEWFACTORYPLUGIN_H
