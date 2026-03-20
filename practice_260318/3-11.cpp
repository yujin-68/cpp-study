// 예제 3-11: Oval 클래스 (선언부 Oval.h, 구현부 Oval.cpp 분리)
// 사각형에 내접하는 타원의 너비·높이를 저장하고 면적을 계산하는 클래스
// 컴파일: g++ 3-11.cpp Oval.cpp -o 3-11

#include "Oval.h"

int main() {
    Oval kitae, jane(10, 15);
    kitae.set(3, 4);
    kitae.show();
    cout << jane.getWidth() << "x" << jane.getHeight() << ", 면적 " << jane.area() << endl;
    return 0;
}
