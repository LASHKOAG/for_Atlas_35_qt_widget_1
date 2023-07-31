#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btnOn, SIGNAL(clicked()), this, SLOT(on_btnOn_clicked2()));
    connect(ui->btnOn, SIGNAL(clicked()), this, SLOT(hello_my_btn()));
    connect(ui->btnOff, SIGNAL(pressed()), this, SLOT(on_btnOff_pressed()));
    connect(ui->ledOn, SIGNAL(clicked()), this, SLOT(on_ledOn()));
    connect(ui->ledOff, SIGNAL(clicked()), this, SLOT(on_ledOff()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnOn_clicked2()
{
    qDebug() << "btnOn was clicked";
}

void MainWindow::hello_my_btn()
{
    qDebug() << "Hello from btn on";
}

void MainWindow::on_btnOff_pressed()
{
    qDebug() << "btnOff was pressed";
}

void MainWindow::on_ledOn()
{
    qDebug() << "ledOn was turn on";

    system("./py_led_on.py");
}

void MainWindow::on_ledOff()
{
    qDebug() << "ledOff was turn off";

    system("./py_led_off.py");
}
