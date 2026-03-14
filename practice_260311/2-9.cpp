// 예제 2-9: string 클래스 사용
// 이름, 주소, 나이를 입력받아 한 줄로 출력하는 프로그램
#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	string ad;
	int age;

	cout << "이름은?";
	getline(cin, name);
	cout << "주소는?";
	getline(cin, ad);
	cout << "나이는 ?";
	cin >> age;

	cout << name << ", " << ad << ", " << age << "세";

	return 0;
}