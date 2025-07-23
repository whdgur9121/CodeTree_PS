#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = n;
    for(int i = 1; i<=n; i++) {
        for(int k = 1; k<=cnt; k++) {
            if(k == cnt) {
                cout << i << " * " << k << " = " << i*k << endl;
            }
            else {
                cout << i << " * " << k << " = " << i*k << " / ";
            }
        }
        cnt--;
    }
    return 0;
}