#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/QCoreApplication>
#include <QtMultimedia/QMediaPlayer>

QMediaPlayer * player = new QMediaPlayer;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    player->setMedia(QUrl::fromLocalFile("./music//最初的梦想.mp3"));
    connect(player,&QMediaPlayer::positionChanged,this,&MainWindow::updatePosition);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_pB_play_clicked()
{
player->play();
}

void MainWindow::on_pB_pause_clicked()
{
player->pause();
}

void MainWindow::on_pB_stop_clicked()
{
player->stop();
}

void MainWindow::updatePosition(qint64 pos)
{
ui->Slider->setMaximum(player->duration()/1000);
ui->Slider->setValue(pos*1000);
}



void MainWindow::on_Slider_sliderMoved(int position)
{
    player->setPosition(position*1000);
}
