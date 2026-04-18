#include <iostream>
using namespace std;

class Circle {
    public:
        int radius;

        Circle();
        Circle(int r);
        ~Circle();  //소멸자
        double getArea() {
            return 3.14 * radius * radius;
        }
};

Circle::Circle(int r){
    radius = r;
    cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle() : Circle(1) {}

Circle::~Circle(){
    cout << "반지름" << radius << "원 소멸" << endl;
}