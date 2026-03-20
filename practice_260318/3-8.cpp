// 예제 3-8: Calculator 클래스
// "그만" 입력 전까지 사칙연산 기호와 수를 반복 입력받아 누적 계산하는 Calculator 클래스

#include <iostream>
#include <string>
using namespace std;

class Calculator {
    int value;
    void calc(string op, int number) {
        if      (op == "+") value += number;
        else if (op == "-") value -= number;
        else if (op == "*") value *= number;
        else if (op == "/" && number != 0) value /= number;
    }
public:
    Calculator() : value(0) {}
    int getValue() { return value; }
    void loop() {
        string op;
        int number;
        while (true) {
            cout << "연산 입력>>";
            cin >> op;
            if (op == "그만") break;
            cin >> number;
            calc(op, number);
        }
    }
};

int main() {
    Calculator jane;
    jane.loop();
    cout << "연산 결과는 " << jane.getValue() << endl;
    return 0;
}
