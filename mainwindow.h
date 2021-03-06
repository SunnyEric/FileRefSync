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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_filediffButton_clicked();
    void on_folderdiffButton_clicked();
    void on_btnabout_clicked();

private:
    Ui::MainWindow *ui;
    int tabnum = 1;
    QString version = "0.8.2";
    QString author = "Yuer";
};

#endif // MAINWINDOW_H
