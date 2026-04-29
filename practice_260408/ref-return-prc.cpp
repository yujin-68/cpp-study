#include <iostream>
using namespace std;

int getValue(int& a){
    return a;       //a의 복사본 반환
}

int& getValue(int& a){
    return a;       //a 자체를 반환
}

int& getRef(int& a) { return a; }

main(){
    int x = 10;
    getRef(x) = 99; 
}