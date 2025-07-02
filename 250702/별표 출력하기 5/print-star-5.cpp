#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    while(n) {
        for(int k = 0; k<n; k++) {
            for(int i = 0; i<n; i++) {
            cout << "*";
            }
            cout << " ";
        }
        cout << endl;
        n--;
    }
    return 0;
}