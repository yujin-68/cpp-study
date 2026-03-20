// 예제 3-7: Storage 클래스
// 체온 값을 최대 10개까지 실수로 저장하고, 전체 출력 및 평균을 구하는 Storage 클래스

#include <iostream>
using namespace std;

class Storage {
    double data[10];
    int next;
public:
    Storage() : next(0) {}
    void put(double temp) {
        if (next < 10) data[next++] = temp;
    }
    void dump() {
        for (int i = 0; i < next; i++) {
            cout << data[i];
            if (i < next - 1) cout << " ";
        }
        cout << endl;
    }
    double getAvg() {
        double sum = 0;
        for (int i = 0; i < next; i++) sum += data[i];
        return sum / next;
    }
};

int main() {
    Storage a;
    a.put(36.7);
    a.put(36.9);
    a.put(36.4);
    a.dump();
    cout << "평균 체온은 " << a.getAvg() << "입니다." << endl;
    return 0;
}
