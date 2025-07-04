#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    // Please write your code here.
    //2n-1까지 1, 3, 5 순으로 증가
    //공백은 n-1부터 시작해서 0까지
    //별의 개수는 1부터 2n-1까지

    for(int i = n-1; i>0; i--) {
        for(int k = n; k>n-i; k--) {
            cout << " ";
        }
        for(int k = (2*n-1); k>2*i; k--) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i<n; i++) {
        for(int k = n; k>n-i; k--) {
            cout <<" ";
        }
        for(int k = 2*i; k<(2*n-1); k++) {
            cout <<"*";
        }
        cout << endl;
    }

    return 0;
}
