// 4장 실습 1번: 동적 메모리 할당
// double 배열을 동적 할당하여 온도 5개를 입력받고 평균을 출력하는 프로그램

#include <iostream>
using namespace std;

int main() {
    double *arr = new double[5];
    cout << "온도 5개 입력>>";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    double sum = 0;
    for (int i = 0; i < 5; i++)
        sum += arr[i];
    cout << "평균은 " << sum / 5 << endl;
    delete[] arr;
    return 0;
}
