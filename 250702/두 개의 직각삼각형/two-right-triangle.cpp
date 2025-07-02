#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 0; i<n; i++) {
        for(int k = n-i; k>0; k--) {
            cout << "*";
        }
        for(int k = 2*i; k>0; k--) {
            cout << " ";
        }
        for(int k = n-i; k>0; k--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}