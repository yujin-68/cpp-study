#include <iostream>
using namespace std;

class Square{
    int width;
    int height;
public:
    Square(int width, int height) {
        this->width = width;
        this->height = height;
    }
    double getArea() { return width * height; }
};

int main(){
    Square s(5, 10);
    cout << s.getArea() << endl;
}