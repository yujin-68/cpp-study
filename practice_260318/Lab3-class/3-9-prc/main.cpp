#include <iostream>
#include "player.cpp"
using namespace std;

int main() {
    Player p1;
    Player p2("전사", 5);
    p1.print();
    p2.print();
}