#ifndef MYRECOGNITION_H
#define MYRECOGNITION_H

#include <jetson-inference/imageNet.h>
#include <jetson-utils/loadImage.h>

#include <string>

using namespace std;

class MyRecognition
{
public:
    MyRecognition();
    ~MyRecognition();
    string recognize(string filename);

private:
    imageNet* net;
};

#endif // MYRECOGNITION_H
