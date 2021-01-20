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
    void updatePosition(qint64 pos);
    ~MainWindow();

private slots:



    void on_pB_play_clicked();

    void on_pB_pause_clicked();

    void on_pB_stop_clicked();

    void on_Slider_sliderMoved(int position);
    void onPositionChanged(qint64);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
