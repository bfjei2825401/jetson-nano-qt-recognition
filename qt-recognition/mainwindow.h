#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDebug>
#include <opencv.hpp>
#include <QImage>
#include <QPixmap>
#include <QString>
#include <QSize>
#include <QPoint>

#include "myrecognition.h"

using namespace cv;

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonSelectImage_clicked();

    void on_buttonRecognize_clicked();

    void on_buttonExit_clicked();

private:
    Ui::MainWindow *ui;
    QString filename;
    QPoint centralPos(QSize windowSize, QSize parentWindowSize);
    MyRecognition myrecognition;
};

#endif // MAINWINDOW_H
