#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    // 홀수일 때는 별 하나 붙이기
    // 짝수일 때는 별 하나 붙이면서 아래로 줄 출력하기

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "* ";
    }
    cout << endl;

    int count = 2;
    for(count; count <= n; count++) {
        for(int i = 1; i <= n; i++) {
            if( i % 2 == 0 && i/count >= 1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }


    
    return 0;
}