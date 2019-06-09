# jetson-nano-qt-recognition
# Startup
## First install qt5 and qt creator in jetson nano
```
sudo apt-get install qt5-default qt-creator -y
```
## Use qt creator to open the project
## Configure library and include path in `qt-recognition.pro` file
```
LIBS += /usr/local/lib/libjetson* \
        /usr/lib/libopencv_*
INCLUDEPATH += /usr/local/cuda/include \
               /usr/local/include/jetson-inference \
               /usr/local/include/jetson-utils
```
