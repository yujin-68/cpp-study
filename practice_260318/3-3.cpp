// 예제 3-3: Account 클래스
// 소유자와 잔액으로 구성된 은행 계좌를 나타내는 Account 클래스 (입금, 출금, 잔액 조회 기능)

#include <iostream>
#include <string>
using namespace std;

class Account {
    string owner;
    int balance;
public:
    Account(string name) : owner(name), balance(0) {}
    void deposit(int money) { balance += money; }
    int withdraw(int money) {
        if (money > balance) {
            int ret = balance;
            balance = 0;
            return ret;
        }
        balance -= money;
        return money;
    }
    string getOwner() { return owner; }
    int inquiry() { return balance; }
};

int main() {
    Account a("황수희");
    a.deposit(20000);
    cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
    int money = a.withdraw(15000);
    cout << money << "원 출금, ";
    cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
    money = a.withdraw(8000);
    cout << money << "원 출금, ";
    cout << a.getOwner() << " 잔액은 " << a.inquiry() << endl;
    return 0;
}
