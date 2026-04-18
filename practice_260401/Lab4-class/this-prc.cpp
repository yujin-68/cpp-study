#include <iosteam>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius) {
        this->radius = radius;
    }
    double getArea() { return 3.14 * radius * radius; }
};

int main(){
    Circle c(5);
    cout << c.getArea() << endl;
}