#include <iostream>
#include <string>

using namespace std;


int main() {
    // Please write your code here.

    //여는 괄호 두개와 연속한 닫는 괄호 2개로 서로 다른 가지수 구하기
    //단, 반드시 ((...))의 모양이어야 함

    string a;
    cin >> a;

    int cnt = 0;

    for(int i = 0; i<a.length(); i++) {
        if(a[i] == '(' && a[i+1] == '(' ) {
            for(int j = i+2; j<a.length()-1; j++) {
                if(a[j] == ')' && a[j+1] == ')') {
                    cnt++;
                }
            }
        }
    }

    cout << cnt;

    return 0;
}
