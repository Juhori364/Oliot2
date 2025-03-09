#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

    if(timer){
        timer->stop();
        delete timer;
        timer = nullptr;

    }
    delete ui;
}

void MainWindow::on_Time1_clicked()
{
    gameTime=600;
}


void MainWindow::on_Time2_clicked()
{
    gameTime=300;
}


void MainWindow::on_Start_clicked()
{

    p1Time=gameTime;
    p2Time=gameTime;
    currentPlayer = 1;

    ui->prog1->setRange(0, gameTime);
    ui->prog2->setRange(0, gameTime);
    ui->prog1->setValue(gameTime);
    ui->prog2->setValue(gameTime);

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow:: updateProgressBar);
    timer->setInterval(1000);
    timer->start();


}

void MainWindow::updateProgressBar()
{
    if(currentPlayer==1){
        p1Time--;
        ui->prog1->setValue(p1Time);

    }
    else{
        p2Time--;
        ui->prog2->setValue(p2Time);
    }
}


void MainWindow::on_Switch1_clicked()
{
    currentPlayer=2;
}


void MainWindow::on_Switch2_clicked()
{
    currentPlayer=1;
}


void MainWindow::on_Stop_clicked()
{
    if(timer){
        timer->stop();
        delete timer;
        timer = nullptr;

    }
    ui->prog1->setValue(0);
    ui->prog2->setValue(0);

}

