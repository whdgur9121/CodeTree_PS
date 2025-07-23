#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 1; i<=n; i++) {
        for(int k = n; k>0; k--) {
            cout << i*k << " ";
        }
        cout << endl;
    }
    return 0;
}