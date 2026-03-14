// 예제 2-1: 1~100 정수 출력
// 1부터 100까지의 정수를 탭으로 구분하여 10개씩 줄 바꿔 출력하는 프로그램
#include <iostream>
int main() {
	int n = 1;
	for (n; n <= 100; n++) {
		std::cout << n << "\t";
		if (n % 10 == 0) {
			std::cout << "\n";
		}
	}

	return 0;
}