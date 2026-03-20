// 예제 3-12: Chart 클래스
// 빨강·파랑·노랑 선호도 학생 수를 입력받아 퍼센트 차트를 출력하는 클래스 (소멸자 포함)

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Chart {
    string title;
    int data[3];
    string colors[3];
public:
    Chart(string t) : title(t) {
        colors[0] = "빨강"; colors[1] = "파랑"; colors[2] = "노랑";
        for (int i = 0; i < 3; i++) data[i] = 0;
    }
    ~Chart() {
        cout << "차트 데이터는 저장되지 않고 사라집니다." << endl;
    }
    int getNumberOfColors() { return 3; }
    string getColor(int i) { return colors[i]; }
    void add(int i, int count) { data[i] = count; }
    void draw() {
        int total = data[0] + data[1] + data[2];
        cout << title << endl;
        for (int i = 0; i < 3; i++) {
            cout << colors[i] << ": "
                 << fixed << setprecision(4)
                 << (double)data[i] / total * 100 << "%" << endl;
        }
        for (int i = 0; i < total / 4; i++) cout << "*";
        cout << endl;
    }
};

int main() {
    Chart chart("색 선호도 조사 차트");
    for (int i = 0; i < chart.getNumberOfColors(); i++) {
        cout << chart.getColor(i) << " 이 좋은 학생>>";
        int count;
        cin >> count;
        chart.add(i, count);
    }
    chart.draw();
    return 0;
}
