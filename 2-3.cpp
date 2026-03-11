//예제 3-1
//점수를 입력받아 90~100 사이면 A, 80~89 사이면 B, 70~79 사이면 C, 60~69 사이면 D, 나머지는 F를 출력한다.
//100보다 크거나 음수가 입력되면 "잘못된 점수입니다."를 출력한다.

#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "점수를 입력하세요: ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "잘못된 점수입니다." << endl;
    } else if (score >= 90) {
        cout << "A" << endl;
    } else if (score >= 80) {
        cout << "B" << endl;
    } else if (score >= 70) {
        cout << "C" << endl;
    } else if (score >= 60) {
        cout << "D" << endl;
    } else {
        cout << "F" << endl;
    }

    return 0;
}