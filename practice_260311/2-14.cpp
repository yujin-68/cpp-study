// 예제 2-14: 카페 주문 시스템
// 커피 메뉴와 수량을 입력받아 금액을 계산하고, 총 판매액이 20000원 초과 시 영업을 종료하는 프로그램
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char cof[100];
	int n;
	int total = 0;
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";
	
	while (1) {
		cout << "주문>> ";
		cin >> cof >> n;

		int price = 0;
		if (strcmp(cof, "에스프레소") == 0) {
			price = 2000;
		}
		else if (strcmp(cof, "아메리카노") == 0) {
			price = 2300;
		}
		else if (strcmp(cof, "카푸치노") == 0) {
			price = 2500;
		}
		else {
			cout << "없는 메뉴입니다.\n";
			break;
		}

		int order = n * price;
		total += order;

		cout << order << "원입니다. 맛있게 드세요\n";

		if (total > 20000) {
			cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
			break;
		}
	}

    return 0;
}