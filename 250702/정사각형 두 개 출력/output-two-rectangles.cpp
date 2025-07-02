#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 2;
    while(cnt--) {
        for(int i = 0; i<n; i++) {
            for(int k = 0; k<n; k++) {
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}