#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    num1Flag= false;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::numberClickHandler(int n){
    qDebug() << "Button clicked: " << n;
    QString nString=QString::number(n);

    if(num1Flag==false){
        ui->Number1->setText(nString);
        num1Flag=true;
    }
        else{
        ui->Number2->setText(nString);
    };


}

//Plus operaatio
void MainWindow::on_pushButton_13_clicked()
{
    QString num1=ui->Number1->text();
    QString num2=ui->Number2->text();
    int num1int =num1.toInt();
    int num2int=num2.toInt();
    int result = num1int+num2int;
  globalResult=QString::number(result);

}

//Miinus operaatio
void MainWindow::on_pushButton_14_clicked()
{
    QString num1=ui->Number1->text();
    QString num2=ui->Number2->text();
    int num1int =num1.toInt();
    int num2int=num2.toInt();
    int result = num1int-num2int;
    globalResult=QString::number(result);

}


void MainWindow::on_pushButton_15_clicked()
{
    QString num1=ui->Number1->text();
    QString num2=ui->Number2->text();
    int num1int =num1.toInt();
    int num2int=num2.toInt();
    int result = num1int*num2int;
    globalResult=QString::number(result);

}


void MainWindow::on_pushButton_16_clicked()
{
    QString num1=ui->Number1->text();
    QString num2=ui->Number2->text();
    int num1int =num1.toInt();
    int num2int=num2.toInt();
    float result = num1int/num2int;
    globalResult=QString::number(result);

}


void MainWindow::on_pushButton_clicked()
{
    QString str=ui->pushButton->text();
    int intStr=str.toInt();
    numberClickHandler(intStr);
}


void MainWindow::on_pushButton_2_clicked()
{
    QString str=ui->pushButton_2->text();
    int intStr=str.toInt();
    numberClickHandler(intStr);
}


void MainWindow::on_pushButton_3_clicked()
{
    QString str=ui->pushButton_3->text();
    int intStr=str.toInt();
    numberClickHandler(intStr);
}


void MainWindow::on_pushButton_4_clicked()
{
    QString str=ui->pushButton_4->text();
    int intStr=str.toInt();
    numberClickHandler(intStr);
}


void MainWindow::on_pushButton_5_clicked()
{
    QString str=ui->pushButton_5->text();
    int intStr=str.toInt();
    numberClickHandler(intStr);
}


void MainWindow::on_pushButton_6_clicked()
{
    QString str=ui->pushButton_6->text();
    int intStr=str.toInt();
    numberClickHandler(intStr);
}


void MainWindow::on_pushButton_7_clicked()
{
    QString str=ui->pushButton_7->text();
    int intStr=str.toInt();
    numberClickHandler(intStr);
}


void MainWindow::on_pushButton_8_clicked()
{
    QString str=ui->pushButton_8->text();
    int intStr=str.toInt();
    numberClickHandler(intStr);
}


void MainWindow::on_pushButton_9_clicked()
{
    QString str=ui->pushButton_9->text();
    int intStr=str.toInt();
    numberClickHandler(intStr);
}


void MainWindow::on_pushButton_10_clicked()
{
    QString str=ui->pushButton_10->text();
    int intStr=str.toInt();
    numberClickHandler(intStr);
}

//Clear
void MainWindow::on_pushButton_11_clicked()
{
    ui->Number1->setText("");
    ui->Number2->setText("");
    ui->Result->setText("");
    num1Flag=false;
}

//Enter
void MainWindow::on_pushButton_12_clicked()
{
    qDebug() << "Enter";
    ui->Result->setText(globalResult);

}

