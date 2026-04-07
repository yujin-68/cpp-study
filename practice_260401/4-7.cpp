// 4장 실습 7번: 랜덤 사용자 ID 생성기
// 형용사 배열과 명사 배열을 조합하여 랜덤 사용자 ID를 생성하는 프로그램

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned)time(0));
    string front[8] = {"뛰어난", "사랑스러운", "끼볼까불", "씩씩한",
                       "멋진", "귀여운", "용감한", "활발한"};
    string back[10] = {"호랑이", "장미", "고양이", "나팔꽃",
                       "독수리", "토끼", "해바라기", "나비", "사자", "강아지"};
    string answer;
    while (true) {
        cout << "사용자 ID 생성(yes/no)>>";
        cin >> answer;
        if (answer != "yes") break;
        int f = rand() % 8;
        int b = rand() % 10;
        cout << front[f] << " " << back[b] << endl;
    }
    return 0;
}
