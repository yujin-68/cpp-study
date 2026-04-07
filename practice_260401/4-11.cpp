// 4장 실습 11번: CoffeeVendingMachine 클래스
// Container 클래스로 원료통을 구성하고 커피 자판기를 구현하는 프로그램

#include <iostream>
using namespace std;

class Container {
    int size;
public:
    Container() { size = 10; }
    void fill(int n) { size = n; }
    bool consume(int n) {
        if (size < n) return false;
        size -= n;
        return true;
    }
    int getSize() { return size; }
};

class CoffeeVendingMachine {
    Container tong[3];
    void show() {
        cout << "커피 " << tong[0].getSize()
             << ", 물 " << tong[1].getSize()
             << ", 설탕 " << tong[2].getSize() << endl;
    }
    void fill() {
        tong[0].fill(10);
        tong[1].fill(10);
        tong[2].fill(10);
    }
    void getEspresso() {
        if (!tong[0].consume(1) || !tong[1].consume(1)) {
            cout << "원료가 부족합니다." << endl; return;
        }
        cout << "에스프레소 드세요" << endl;
    }
    void getAmericano() {
        if (!tong[0].consume(1) || !tong[1].consume(2)) {
            cout << "원료가 부족합니다." << endl; return;
        }
        cout << "아메리카노 드세요" << endl;
    }
    void getSugarCoffee() {
        if (!tong[0].consume(1) || !tong[1].consume(2) || !tong[2].consume(1)) {
            cout << "원료가 부족합니다." << endl; return;
        }
        cout << "설탕커피 드세요" << endl;
    }
public:
    void run() {
        cout << "***** 커피자판기를 작동합니다. *****" << endl;
        fill();
        int choice;
        while (true) {
            cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
            cin >> choice;
            if (choice == 1) getEspresso();
            else if (choice == 2) getAmericano();
            else if (choice == 3) getSugarCoffee();
            else if (choice == 4) show();
            else if (choice == 5) { fill(); show(); }
        }
    }
};

int main() {
    CoffeeVendingMachine m;
    m.run();
    return 0;
}
