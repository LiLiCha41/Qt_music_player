#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/QCoreApplication>
#include <QtMultimedia/QMediaPlayer>

QMediaPlayer * player = new QMediaPlayer;

/*时间显示*/
static int all_time =0;
static int all_time_h = 0;
static int all_time_m = 0;
static int all_time_s = 0;
static int now_time = 0;
static int now_time_h = 0;
static int now_time_m = 0;
static int now_time_s = 0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    player->setMedia(QUrl::fromLocalFile("./music//最初的梦想.mp3"));
    //进度条被动槽
    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(onPositionChanged(qint64)));
    //总时间获取槽，只执行一次
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

/*音乐总时间显示*/
all_time_h = all_time/3600;
all_time_m = (all_time%3600)/60;
all_time_s = all_time%60;
ui->lbl_all_time->setText
        (QString("%1:%2:%3").arg(QString::number(all_time_h)).arg(QString::number(all_time_m)).arg(QString::number(all_time_s)));

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

all_time=player->duration()/1000;
//qDebug()<<all_time;
ui->Slider->setMaximum(all_time);
ui->lineEdit1->setText(QString::number(all_time));
}
//进度条主动动作
void MainWindow::on_Slider_sliderMoved(int position)
{
    position*=1000;
    position+=now_time_s;
    player->setPosition(position);

}

//进度条被动动作
void MainWindow::onPositionChanged(qint64 position)
{
    /*音乐当前时间显示*/
    now_time=position/1000;

    now_time_h = now_time/3600;
    now_time_m = (now_time%3600)/60;
    now_time_s = now_time%60;
    ui->lbl_now_time->setText
            (QString("%1:%2:%3").arg(QString::number(now_time_h)).arg(QString::number(now_time_m)).arg(QString::number(now_time_s)));


    ui->Slider->setValue(now_time);
    ui->lineEdit3->setText(QString::number(now_time));
}
