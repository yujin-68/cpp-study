// 예제 3-5: CoffeeMachine 클래스
// 커피, 물, 설탕 재료를 관리하며 에스프레소, 아메리카노, 설탕커피를 제조하는 커피머신 클래스

#include <iostream>
using namespace std;

class CoffeeMachine {
    int coffee, water, sugar;
public:
    CoffeeMachine(int c, int w, int s) : coffee(c), water(w), sugar(s) {}
    void drinkEspresso()   { coffee -= 1; water -= 1; }
    void drinkAmericano()  { coffee -= 1; water -= 2; }
    void drinkSugarCoffee(){ coffee -= 1; water -= 2; sugar -= 1; }
    void fill()            { coffee = 10; water = 10; sugar = 10; }
    void show() {
        cout << "[머신 상태] 커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << endl;
    }
};

int main() {
    CoffeeMachine java(5, 10, 6);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
    return 0;
}
