#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 0; i<n; i++) {
        for(int k = 0; k<=i; k++) {
            cout << "*";
        }
        cout << endl << endl;
    }

    for(int i = n-1; i>0; i--) {
        for(int k = i; k>0; k--) {
            cout << "*";
        }
        cout << endl << endl;
    }
    return 0;
}