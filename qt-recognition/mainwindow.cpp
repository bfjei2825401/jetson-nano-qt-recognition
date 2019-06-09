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
    QString default_dir = tr("/home/salieri/Project/Github/jetson-inference/data/images/");
    QString path = QFileDialog::getOpenFileName(this, tr("Select one image to recognize"), default_dir, "Image File(*.jpg *.jpeg)");
    if ( path.length() == 0 )
    {

    }
    else
    {
        this->filename = path;
        Mat imgC = cv::imread(this->filename.toStdString(), IMREAD_COLOR);
        if ( !imgC.empty() )
        {
            Mat imgS;
            cvtColor(imgC, imgS, cv::COLOR_BGR2RGB);
            QImage tmp(imgS.data, imgS.cols, imgS.rows, imgS.step, QImage::Format_RGB888);
            this->setStretchImageOnCenter(tmp.size());
            ui->labelImageWindow->setPixmap(QPixmap::fromImage(tmp));
        }
    }
//    qDebug() << filename << endl;
}

void MainWindow::on_buttonRecognize_clicked()
{
    bool result = this->myrecognition.recognize(this->filename.toStdString());
    if ( result )
    {
        ui->labelClassVal->setText(QString::fromStdString(this->myrecognition.getDescription()));
        ui->labelSimilarityVal->setText(QString::fromStdString(this->myrecognition.getConfidence()));
    }
}

void MainWindow::on_buttonExit_clicked()
{
    this->close();
}

QPoint MainWindow::centralPos(QSize windowSize, QSize parentWindowSize)
{
    QPoint pos;
    pos.setX((parentWindowSize.width() - windowSize.width())/2);
    pos.setY((parentWindowSize.height() - windowSize.height())/2);
    return pos;
}
void MainWindow::setStretchImageOnCenter(QSize size)
{
    QSize windowSize = ui->frameImage->size();
    qDebug() << tr("image origin size: ") <<size << endl;
    size.scale(windowSize, Qt::KeepAspectRatio);
    ui->labelImageWindow->resize(size);
    QPoint labelPos = this->centralPos(size, windowSize);
    ui->labelImageWindow->move(labelPos);
    qDebug() << tr("image scaled size: ") << size << endl;
    qDebug() << tr("frame size: ") << windowSize << endl;
    qDebug() << tr("label size: ") << ui->labelImageWindow->size() << endl;
    qDebug() << tr("image label position: ") << labelPos << endl;
}
