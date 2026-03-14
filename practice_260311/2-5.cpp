//예제3
//정수를 하나 입력받아 정수만큼 *을 출력하는 프로그램을 작성하시오. 단, 음수가 입력되면 "음수는 입력할 수 없습니다."를 출력한다.
//for, while, do-while문을 각각 사용하여 작성하시오.

#include <iostream>
using namespace std;

void printStars_for(int n) {
    cout << "[for문]" << endl;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printStars_while(int n) {
    cout << "[while문]" << endl;
    int i = n;
    while (i > 0) {
        int j = 0;
        while (j < i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    }
}

void printStars_dowhile(int n) {
    cout << "[do-while문]" << endl;
    int i = n;
    do {
        int j = 0;
        do {
            cout << "*";
            j++;
        } while (j < i);
        cout << endl;
        i--;
    } while (i > 0);
}

int main() {
    int n;
    cout << "정수를 입력하세요: ";
    cin >> n;

    if (n < 0) {
        cout << "음수는 입력할 수 없습니다." << endl;
    } else {
        printStars_for(n);
        cout << endl;
        printStars_while(n);
        cout << endl;
        printStars_dowhile(n);
    }

    return 0;
}



