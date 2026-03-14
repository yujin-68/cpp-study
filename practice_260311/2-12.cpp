// 예제 2-12: 함수를 이용한 합계 계산
// sum() 함수를 작성하여 1부터 n까지의 합을 구하고 출력하는 프로그램
#include <iostream>
using namespace std;

int sum(int a, int b);

int main() {
	int n = 0;
	
	cout << "끝 수를 입력하세요>>";
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1,n) << "입니다.";

	return 0;
}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
}