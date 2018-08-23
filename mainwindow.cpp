#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject *obj = new QObject(this);

    thread = new ThreadFromQThread(obj);
    thread->start();

    qDebug() << "MainWindow here";
}

MainWindow::~MainWindow()
{
    thread->exit();
    delete ui;
}
