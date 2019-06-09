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
    bool recognize(string filename);
    string getDescription();
    string getConfidence();
    string getClassIndex();

private:
    imageNet* net;
    string description;
    string confidence;
    string classIndex;
};

#endif // MYRECOGNITION_H
