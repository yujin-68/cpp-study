// 예제 3-2: Coffee 클래스
// 커피 원액, 설탕, 우유, 물의 양을 멤버 변수로 가지고, show()로 재료별 별표를 출력하는 Coffee 클래스

#include <iostream>
#include <string>
using namespace std;

class Coffee {
    int coffee, sugar, milk, water;
public:
    Coffee() : coffee(10), sugar(0), milk(0), water(0) {}
    Coffee(int c, int s, int m, int w) : coffee(c), sugar(s), milk(m), water(w) {}
    void show() {
        cout << "coffee "; for (int i = 0; i < coffee; i++) cout << "*"; cout << endl;
        cout << "sugar ";  for (int i = 0; i < sugar;  i++) cout << "*"; cout << endl;
        cout << "milk ";   for (int i = 0; i < milk;   i++) cout << "*"; cout << endl;
        cout << "water ";  for (int i = 0; i < water;  i++) cout << "*"; cout << endl;
    }
};

int main() {
    Coffee espresso;
    Coffee americano(5, 0, 0, 10);
    Coffee cappuccino(5, 1, 5, 2);
    Coffee mySweet(3, 7, 5, 5);

    espresso.show();
    cout << endl;
    mySweet.show();
    return 0;
}
