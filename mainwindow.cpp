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
    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(onPositionChanged(qint64)));
    connect(player,&QMediaPlayer::durationChanged,this,&MainWindow::updatePosition);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pB_play_clicked()
{
player->play();
player->setVolume(50);
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
ui->Slider->setMaximum(player->duration());
//ui->Slider->setValue(10000);

ui->lineEdit1->setText(QString::number(player->duration()));
ui->lineEdit2->setText(QString::number(pos));
ui->lineEdit3->setText(QString::number(player->bufferStatus()));


}



void MainWindow::on_Slider_sliderMoved(int position)
{
    player->setPosition(position);
    //ui->lineEdit3->setText(QString::number(position));


}
void MainWindow::onPositionChanged(qint64 position)
{
    ui->Slider->setValue(position);
    ui->lineEdit3->setText(QString::number(position));
}
