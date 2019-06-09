#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_buttonSelectImage_clicked()
{
    QString default_dir = tr(".");
    this->filename = QFileDialog::getOpenFileName(0, tr("Select one image to recognize"), default_dir, "Images(*.jpg *.jpeg)", 0, 0);
    Mat imgC = cv::imread(this->filename.toStdString(), IMREAD_COLOR);
    if ( !imgC.empty() )
    {
        Mat imgS;
        cvtColor(imgC, imgS, cv::COLOR_BGR2RGB);
        QImage tmp(imgS.data, imgS.cols, imgS.rows, imgS.step, QImage::Format_RGB888);
        QSize windowSize = ui->frameImage->size();
        QSize imageSize = tmp.size();
        qDebug() << imageSize << endl;
        imageSize.scale(windowSize, Qt::KeepAspectRatio);
        ui->labelImageWindow->resize(imageSize);
        ui->labelImageWindow->setPixmap(QPixmap::fromImage(tmp));
        QPoint labelPos = this->centralPos(imageSize, windowSize);
        ui->labelImageWindow->move(labelPos);
        qDebug() << imageSize << endl;
        qDebug() << windowSize << endl;
        qDebug() << labelPos << endl;
    }
//    qDebug() << filename << endl;
}

void MainWindow::on_buttonRecognize_clicked()
{

}

void MainWindow::on_buttonExit_clicked()
{

}

QPoint MainWindow::centralPos(QSize windowSize, QSize parentWindowSize)
{
    QPoint pos;
    pos.setX((parentWindowSize.width() - windowSize.width())/2);
    pos.setY((parentWindowSize.height() - windowSize.height())/2);
    return pos;
}
