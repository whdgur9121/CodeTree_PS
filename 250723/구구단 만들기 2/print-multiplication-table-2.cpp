#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    for(int i = 2; i<=8; i= i+2) {
        for(int k = b; k>=a; k--) {
            cout << k << " * " << i << " = " << k*i;
            if(k != a) {
                cout << " / ";
            }
        }
        cout << endl;
    }
    return 0;
}