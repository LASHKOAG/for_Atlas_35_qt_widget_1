#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnOn_clicked2();
    void hello_my_btn();
    void on_btnOff_pressed();
    void on_ledOn();
    void on_ledOff();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
