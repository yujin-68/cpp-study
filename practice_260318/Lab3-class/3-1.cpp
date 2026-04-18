#include <iostream>
using namespace std;

class Circle {
    public:
        int radius;
        double getArea();
};

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