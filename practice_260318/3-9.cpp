// 예제 3-9: CafeOrder 클래스 (2장 실습 13번 클래스 버전)
// 에스프레소·아메리카노·카푸치노를 주문받아 금액을 계산하고, 하루 매출 30000원 이상 시 영업 종료

#include <iostream>
#include <string>
using namespace std;

class CafeOrder {
    int total;
public:
    CafeOrder() : total(0) {}
    void run() {
        cout << "에스프레소 3000원,아메리카노 3500원,카푸치노 4000원입니다." << endl;
        while (true) {
            string menu;
            int n;
            cout << "주문>>";
            cin >> menu >> n;

            int price = 0;
            if      (menu == "에스프레소") price = 3000;
            else if (menu == "아메리카노") price = 3500;
            else if (menu == "카푸치노")   price = 4000;
            else { cout << "없는 메뉴입니다." << endl; continue; }

            int order = price * n;
            total += order;
            cout << order << "원입니다. 맛있게 드세요" << endl;

            if (total >= 30000) {
                cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
                break;
            }
        }
    }
};

int main() {
    CafeOrder cafe;
    cafe.run();
    return 0;
}
