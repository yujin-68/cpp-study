#include <iostream>
using namespace std;

class Circle {
    int radius
public:
    Circle(int r=1) { radius = r; }
    Circle& plus(int n){
        radius += n;
        return *this;       //자기 자신을 참조로 리턴
    }
    int getRadius() { return radius; }
};

int main(){
    Circle a(5);
    a.plus(1).plus(2).plus(3);
    cout << a.getRadius() << endl;      //11
}