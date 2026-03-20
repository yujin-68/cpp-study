// 예제 3-10: Pipe 클래스
// 0과 양수만 10개 저장하는 파이프 클래스 (arrive: 뒤에 삽입, shift: 앞에서 제거, show: 전체 출력)

#include <iostream>
using namespace std;

class Pipe {
    int data[10];
    int index;
public:
    Pipe() : index(0) {
        for (int i = 0; i < 10; i++) data[i] = 0;
    }
    int arrive(int n) {
        if (index == 10) {
            int removed = data[0];
            for (int i = 0; i < 9; i++) data[i] = data[i + 1];
            data[9] = n;
            return removed;
        }
        data[index++] = n;
        return -1;
    }
    int shift() {
        int removed = data[0];
        for (int i = 0; i < 9; i++) data[i] = data[i + 1];
        data[9] = 0;
        return removed;
    }
    void show() {
        cout << "파이프 내부 [";
        for (int i = 0; i < 10; i++) {
            cout << data[i];
            if (i < 9) cout << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    Pipe pipe;
    for (int i = 0; i < 6; i++) pipe.arrive(i);
    pipe.show();
    for (int i = 6; i < 12; i++) pipe.arrive(i);
    pipe.show();
    int front = pipe.shift();
    cout << "shift()로 제거된 맨 앞 데이터 : " << front << endl;
    pipe.show();
    front = pipe.arrive(50);
    cout << "arrive(50)로 제거된 맨 앞 데이터 : " << front << endl;
    pipe.show();
    return 0;
}
