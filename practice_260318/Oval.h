// Oval 클래스 선언부 - 사각형에 내접하는 타원을 추상화한 클래스 (너비·높이 저장, 면적 계산)

#ifndef OVAL_H
#define OVAL_H

#include <iostream>
using namespace std;

class Oval {
    int width, height;
public:
    Oval();
    Oval(int w, int h);
    ~Oval();
    int getWidth() { return width; }
    int getHeight() { return height; }
    void set(int w, int h);
    void show();
    double area();
};

#endif
