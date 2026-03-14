// 예제 2-2: 구구단 출력
// 중첩 for문을 사용하여 구구단 전체(1단~9단)를 출력하는 프로그램
#include <iostream>
int main() {
	for (int n = 1; n < 10; n++) {
		for (int i = 1; i < 10; i++) {
			std::cout << i << "x" << n << "=" << n * i << "\t";
		}
		std::cout << "\n";
	}
	
	return 0;
}