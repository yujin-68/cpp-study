#include <iostream>
#include "player.h"
using namespace std;

Player::Player(string n, int l) : name(n), level(l) {}
Player::Player() : Player("무명", 1) {}
void Player::print() {
    cout << name << " / " << level << "레벨" << endl;
}