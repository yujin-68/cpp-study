#include <iostream>
//string을 사용하려면 헤더파일 필요
#include <string>
using namespace std;

int main(){

    //생성
    string s1;  //빈 문자열
    string s2("Hello");  //초기화
    string s3(s2);  //s2 복사

    //입출력
    cout << s2 << endl;
    cin >> s2;  //입력 (공백 전까지)
    getline(cin, s2, '\n');  //한 줄 전체 입력 (공백 포함)

    //주요 멤버 함수
    s.length(); //문자열 길이
    s.append("world");   //문자열 뒤에 추가
    s.substr(0,3);  //0번째부터 3개 문자 추출
    s.find("lo", 0);    //0번째부터 "lo" 검색 --> 인덱스 반환
    s.replace(0, 2, "Hi");  //🔴0번째부터 2개를 "Hi"로 교체 (시작인덱스, 바꿀 개수, 바꿀 문자열)

    //문자열 비교 및 연결
    s1 == s2
    s1 < s2     //사전순으로 s1이 앞이면 true
    s1 + s2     //두 문자열 연결

    //숫자 변환
    string s = "123";
    int n = stoi(S)     //문자열 --> 정수

}