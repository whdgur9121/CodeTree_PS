#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    //출력 별 2*i -1
    //출력 공백 n-i

    for(int i = n; i > 0; i--) {
        
        for(int k = 0; k < n-i; k++) {
            cout << "  ";
        }
        for(int k = (2*i -1); k>0; k--) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}