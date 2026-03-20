// 예제 3-6: Memo 클래스
// 날짜와 내용을 문자열로 저장하는 메모 클래스 (출력, 날짜 비교, 날짜/내용 반환 기능)

#include <iostream>
#include <string>
using namespace std;

class Memo {
    string date, content;
public:
    Memo(string d, string c) : date(d), content(c) {}
    void show() { cout << date << ", " << content << endl; }
    bool isSameDate(Memo b) { return date == b.date; }
    string getDate() { return date; }
    string getContent() { return content; }
};

int main() {
    Memo a("1:20", "동계 프로그래밍 캠프");
    Memo b("2:20", "김경미 독일 송별회");
    Memo c("2:21", "박채원 졸업식. 대학원 간대");

    a.show();
    if (a.isSameDate(b)) cout << "같은 날입니다." << endl;
    else cout << "다른 날입니다." << endl;
    cout << b.getDate() << "에 " << b.getContent() << endl;
    return 0;
}
