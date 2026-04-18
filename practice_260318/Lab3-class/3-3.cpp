#include <iostream>
using namespace std;

class Circle {
    public:
        int radius;
        Circle();   //매개 변수 없는 생성자
        Cricle(int r);  //매개 변수 있는 생성자
        double getArea();
};

Cricle::Circle() {
    radius = 1;
    cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r) {
    radius = r;
    cout << "반지름" << radius << "원 생성" << endl;
}

doubel Circle::getArea() {
    return 3.14 * radius * radius;
}

int main() {
    Cricle donut;
    donut.radius = 1;
    double area = donut.getArea();
    cout << "donut 면적은" << area << "입니다." <<endl;

    Circle pizza;
    pizza.radius = 10;
    area = pizza.getArea()
    cout << "pizza 면적은" << area << "입니다." <<endl;

}