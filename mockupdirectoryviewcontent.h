#ifndef MOCKUPDIRECTORYVIEWCONTENT_H
#define MOCKUPDIRECTORYVIEWCONTENT_H

#include <QWidget>

class MockupDirectoryView;

namespace Ui {
class MockupDirectoryViewContent;
}

class MockupDirectoryViewContent : public QWidget
{
    friend class MockupDirectoryView;
    Q_OBJECT

public:
    explicit MockupDirectoryViewContent(MockupDirectoryView *parent = nullptr);
    ~MockupDirectoryViewContent();

private slots:
    void on_toolButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MockupDirectoryViewContent *ui;

    MockupDirectoryView *m_view;
};

#endif // MOCKUPDIRECTORYVIEWCONTENT_H
