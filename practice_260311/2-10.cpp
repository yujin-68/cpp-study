// 예제 2-10: 문자열 누적 출력
// 문자열을 입력받아 첫 글자부터 한 글자씩 늘려가며 출력하는 프로그램
#include <iostream>
using namespace std;

int main() {
	char s[50];
	cout << "문자열 입력>>";
	cin >> s;

	for (int i = 0; s[i] != 0; i++) {
		for (int j = 0; j <= i; j++) cout << s[j];
		cout << "\n";
	}

	return 0;
}