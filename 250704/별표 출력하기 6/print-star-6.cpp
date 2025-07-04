#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    //모래시계 만들기
    //출력하는 별은 2n - ` 부터 1까지(1일 때는 n인 경우)
    //공백은 0부터 n-1까지

    int n;
    cin >> n;


    for(int i = 0; i < n; i++) {
            for(int k = n-i; k<n; k++) {
                cout << "  ";
            }
            for(int k = 2*i; k<(2*n-1); k++) {
                cout << "* ";
            }
            cout << endl;
    }

    for(int i = n-1; i>0; i--) {
        for(int k = n-1; k>n-i; k--) {
            cout << "  ";
        }
        for(int k = (2*n-1); k>2*i-2; k--) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}