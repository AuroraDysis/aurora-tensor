
#include "MainWindow.h"

#include <QMessageBox>

#include <template/aurora-version.h>

#include <fiblib/Fibonacci.h>

#include "ui_MainWindow.h"

MainWindow::MainWindow()
    : m_ui(new Ui::MainWindow)
{
    // Setup UI
    m_ui->setupUi(this);
}

MainWindow::~MainWindow()
{
}

void MainWindow::on_editNumber_valueChanged(int value)
{
    fiblib::Fibonacci fib;
    m_ui->result->setText("Fib(" + QString::number(value) + ") = " + QString::number(fib(value)));
}

void MainWindow::on_about()
{
    QString about = QString() +
                    "Version:   " + AURORA_VERSION + "\n";

    QMessageBox::about(this, "template project", about);
}
