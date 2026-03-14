// 예제 2-7: while문과 문자열 비교
// "yes"를 입력할 때까지 반복 입력을 받고, "yes"가 입력되면 종료하는 프로그램
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char ch[11];

	while (1) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(ch, 11, '\n');
		if (strcmp(ch, "yes") == 0) break;
	}
	cout << "종료합니다...";

	return 0;
}