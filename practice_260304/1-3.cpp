// 예제 1-3: 1~10 합계 계산
// for문을 사용하여 1부터 10까지의 합을 구해 출력하는 프로그램
#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}