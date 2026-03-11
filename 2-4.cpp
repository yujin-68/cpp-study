//예제 4-1: for문
//두 정수 a,b를 입력 받아 a부터 b까지의 합을 구하는 프로그램을 작성하시오. (a는 b보다 작거나 같다.)

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "두 정수를 입력하세요 (a b): ";
    cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }

    cout << a << "부터 " << b << "까지의 합은 " << sum << "입니다." << endl;

    return 0;
}