#ifndef MOCKUPDIRECTORYVIEW_H
#define MOCKUPDIRECTORYVIEW_H

#include <peony-qt/controls/directory-view/directory-view-widget.h>

class MockupDirectoryViewContent;

class MockupDirectoryView : public Peony::DirectoryViewWidget
{
    friend class MockupDirectoryViewContent;
    Q_OBJECT
public:
    explicit MockupDirectoryView(QWidget *parent = nullptr);

    // must implement.
    const QString viewId() override {return "Mock Directory View";}
    const QString getDirectoryUri() {return "mockup:///";}

    // need implement.
    const QStringList getSelections();

    // optional
    void bindModel(Peony::FileItemModel *model, Peony::FileItemProxyFilterSortModel *proxyModel);
signals:

private:
    MockupDirectoryViewContent *m_content;
};

#endif // MOCKUPDIRECTORYVIEW_H
