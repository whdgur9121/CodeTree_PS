#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 1; i<= 2*n+1; i++) {
        if(i%2 == 1) {
            for(int k = 0; k<2*n+1; k++) {
                cout << "* ";
            }
            cout << endl;
        }
        else {
            for(int k = 0; k<2*n+1; k++) {
                if(k%2 == 0) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}