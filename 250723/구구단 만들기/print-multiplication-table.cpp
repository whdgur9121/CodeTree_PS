#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    for(int i = 1; i<=9; i++) {
        for(int k = b; k >= a; k = k-2) {
            cout << k << " * " << i << " = " << k*i;
            if(k != a) {
                cout << " / ";
            }
        }
        cout << endl;
    }
    return 0;
}