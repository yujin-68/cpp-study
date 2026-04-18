#include <iostream>
using namespace std;

struct Circle {
    private:
        int radius;
    public:
        Circle(int r) { radius = r;}
        double getArea();
};

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main() {
    Circle waffle(3);
    cout << "면적은" << waffle.getArea();
}