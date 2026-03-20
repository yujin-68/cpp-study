// 예제 3-1: Picture 클래스
// 사진의 가로, 세로 크기와 촬영 장소를 저장하는 Picture 클래스를 작성하는 프로그램

#include <iostream>
#include <string>
using namespace std;

class Picture {
    int width, height;
    string place;
public:
    Picture() : width(5), height(7), place("모름") {}
    Picture(int w, int h, string p) : width(w), height(h), place(p) {}
    int getWidth() { return width; }
    int getHeight() { return height; }
    string getPlace() { return place; }
};

int main() {
    Picture pic;
    Picture mt(10, 14, "한라산");
    cout << pic.getWidth() << "x" << pic.getHeight() << " " << pic.getPlace() << endl;
    cout << mt.getWidth() << "x" << mt.getHeight() << " " << mt.getPlace() << endl;
    return 0;
}
