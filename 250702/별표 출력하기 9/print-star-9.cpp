#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    //출력 별 수 : 2*i -1
    //공백의 수 : n-i

    for(int i = 1; i<=n; i++) {
        for(int k = n-i; k>0; k-- ) {
            cout << "  ";
        }
        for(int k = 2*i -1; k>0; k--) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}