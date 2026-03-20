// 예제 3-4: Cube 클래스
// 가로, 세로, 높이를 저장하는 직육면체 Cube 클래스 (부피 계산, 크기 증가, 부피 0 여부 판별)

#include <iostream>
using namespace std;

class Cube {
    int width, length, height;
public:
    Cube(int w, int l, int h) : width(w), length(l), height(h) {}
    void increase(int w, int l, int h) {
        width += w;
        length += l;
        height += h;
    }
    int getVolume() { return width * length * height; }
    bool isZero() { return getVolume() == 0; }
};

int main() {
    Cube cube(1, 2, 3);
    cout << "큐브의 부피는 " << cube.getVolume() << endl;
    cube.increase(1, 2, 3);
    cout << "큐브의 부피는 " << cube.getVolume() << endl;
    if (cube.isZero()) cout << "큐브의 부피는 0" << endl;
    else cout << "큐브의 부피는 0이 아님" << endl;
    return 0;
}
