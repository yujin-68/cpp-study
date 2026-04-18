#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin, str, '\n');    //getline(입력스트림, string변수, 구분자)
    //구분자 '\n'를 만날 때까지 읽음
    cout << str.length() << endl;
    cout << str.substr(0,3) << endl;
    cout << str.append("!!!") << endl;
}