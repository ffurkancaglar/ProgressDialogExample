#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProgressDialog>
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


void MainWindow::ProgressDialog()
{
    int numTasks = 10000;
    QProgressDialog progress("DOSYALAR AKTARILIYOR...","Cancel",0,numTasks,this);
    progress.setWindowModality(Qt::WindowModal);

    for(int i = 0; i < numTasks; i++)
    {
        progress.setValue(i);
        if(progress.wasCanceled())
            break;
    }


}
