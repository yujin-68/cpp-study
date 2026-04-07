// 4장 실습 9번: Book, Library 클래스와 동적 배열
// 도서관 이름과 최대 수용 권수를 받아 책을 추가하고, 가장 비싼 책을 찾는 프로그램

#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int price;
public:
    Book() { title = ""; price = 0; }
    void set(string title, int price) {
        this->title = title;
        this->price = price;
    }
    string getTitle() { return title; }
    int getPrice() { return price; }
};

class Library {
    string name;
    Book* p;
    int size;
    int next = 0;
public:
    Library(string name, int size) {
        this->name = name;
        this->size = size;
        p = new Book[size];
    }
    ~Library() {
        delete[] p;
    }
    void add(string name, int price) {
        if (next >= size) return;
        p[next].set(name, price);
        next++;
    }
    void show() {
        cout << name << "에 입고된 책은 다음 " << next << "권입니다." << endl;
        for (int i = 0; i < next; i++)
            cout << "[" << p[i].getTitle() << "]" << "\t";
        cout << endl;
    }
    Book* mostExpensive() {
        if (next == 0) return NULL;
        int maxIdx = 0;
        for (int i = 1; i < next; i++)
            if (p[i].getPrice() > p[maxIdx].getPrice())
                maxIdx = i;
        return &p[maxIdx];
    }
};

int main() {
    Library *lib = new Library("한국도서관", 10);
    lib->add("명품 C++", 30000);
    lib->add("라즈베리파이", 34000);
    lib->add("HTML5", 33000);
    lib->show();
    Book* b = lib->mostExpensive();
    cout << "가장 비싼 책:" << b->getTitle() << "," << b->getPrice() << endl;
    delete lib;
    return 0;
}
