//예제 6-1: adder()함수와 호출
//두 개의 정수를 전달받아 합을 리턴하는 함수 adder()를 작성하시오. main()함수에서 adder()함수를 호출하여 결과를 출력하시오.

#include <iostream>
using namespace std;

int adder(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "두 정수를 입력하세요: ";
    cin >> x >> y;

    int result = adder(x, y);
    cout << "두 수의 합은 " << result << "입니다." << endl;

    return 0;
}