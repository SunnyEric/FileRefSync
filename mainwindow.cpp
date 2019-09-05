#include "filediff.h"
#include "folderdiff.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_filediffButton_clicked()
{
    FileDiff *filediff = new FileDiff();
    ui->tabWidget->insertTab(tabnum, filediff, "文件比较");
    tabnum++;
}

void MainWindow::on_folderdiffButton_clicked()
{
    FolderDiff *folderdiff = new FolderDiff();
    ui->tabWidget->insertTab(tabnum, folderdiff, "文件夹比较");
    tabnum++;
}
