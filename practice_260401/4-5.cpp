// 4장 실습 5번: Container 클래스와 동적 배열
// 동적 할당된 int 배열을 가지는 Container 클래스 (read, write, rotate, avg 기능)

#include <iostream>
using namespace std;

class Container {
    int* p;
    int size;
public:
    Container(int size) {
        this->size = size;
        p = new int[size];
    }
    ~Container() {
        delete[] p;
    }
    void read() {
        cout << "정수 " << size << "개 입력>>";
        for (int i = 0; i < size; i++)
            cin >> p[i];
    }
    void write() {
        for (int i = 0; i < size; i++)
            cout << p[i] << " ";
        cout << endl;
    }
    void rotate() {
        int last = p[size - 1];
        for (int i = size - 1; i > 0; i--)
            p[i] = p[i - 1];
        p[0] = last;
    }
    double avg() {
        double sum = 0;
        for (int i = 0; i < size; i++)
            sum += p[i];
        return sum / size;
    }
};

int main() {
    Container c(10);
    c.read();
    c.write();
    c.rotate();
    c.write();
    cout << "평균은 " << c.avg() << endl;
    return 0;
}
