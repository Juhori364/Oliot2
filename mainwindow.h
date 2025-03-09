#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Time1_clicked();

    void on_Time2_clicked();

    void on_Start_clicked();

    void updateProgressBar();

    void on_Switch1_clicked();

    void on_Switch2_clicked();

    void on_Stop_clicked();

private:
    Ui::MainWindow *ui;
    int p1Time;
    int p2Time;
    int currentPlayer = 1;
    int gameTime = 0;
    int gameState=0;

    QTimer *timer =nullptr;

};
#endif // MAINWINDOW_H
