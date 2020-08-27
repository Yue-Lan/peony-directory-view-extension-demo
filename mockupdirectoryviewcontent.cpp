#include "mockupdirectoryviewcontent.h"
#include "ui_mockupdirectoryviewcontent.h"

#include "mockupdirectoryview.h"

#include <QFileDialog>

MockupDirectoryViewContent::MockupDirectoryViewContent(MockupDirectoryView *parent) :
    QWidget(parent),
    ui(new Ui::MockupDirectoryViewContent)
{
    ui->setupUi(this);

    m_view = parent;
}

MockupDirectoryViewContent::~MockupDirectoryViewContent()
{
    delete ui;
}

void MockupDirectoryViewContent::on_toolButton_clicked()
{
    auto url = QFileDialog::getExistingDirectoryUrl();
    ui->lineEdit->setText(url.url());
}

void MockupDirectoryViewContent::on_pushButton_clicked()
{
    auto uri = ui->lineEdit->text();
    if (!uri.isEmpty()) {
        m_view->menuRequest(QCursor::pos());
    }
}

void MockupDirectoryViewContent::on_pushButton_2_clicked()
{
    auto uri = ui->lineEdit->text();
    if (!uri.isEmpty()) {
        m_view->updateWindowLocationRequest(uri);
    }
}

void MockupDirectoryViewContent::on_pushButton_3_clicked()
{
    auto uri = ui->lineEdit->text();
    if (!uri.isEmpty()) {
        m_view->viewDoubleClicked(uri);
    }
}
