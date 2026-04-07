// 4장 실습 3번: string 활용
// 문자열을 입력받아 연속된 공백을 하나의 공백으로 줄여 출력하는 프로그램

#include <iostream>
#include <string>
using namespace std;

int main() {
    string line, dest = "";
    cout << "텍스트 입력>>";
    getline(cin, line, '\n');
    bool prevSpace = false;
    for (int i = 0; i < line.size(); i++) {
        if (line[i] == ' ') {
            if (!prevSpace) {
                dest.append(1, ' ');
                prevSpace = true;
            }
        } else {
            dest.append(1, line[i]);
            prevSpace = false;
        }
    }
    cout << dest << endl;
    return 0;
}
