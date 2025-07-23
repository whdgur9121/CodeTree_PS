#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    for(int i = 1; i<=19; i++) {
        for(int k = 1; k<=19; k++) {
            if(k%2 == 1) {
                if(k == 19) {
                    cout << i << " * " << k << " = " << i*k << endl;
                }
                else {
                     cout << i << " * " << k << " = " << i*k << " / ";
                }
            }
            else {
                cout << i << " * " << k << " = " << i*k << endl;
            }
        }
    }
    return 0;
}