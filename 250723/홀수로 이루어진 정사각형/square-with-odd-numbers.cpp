#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int base = 11;
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < n; k++) {
            cout << base + (k*2) << " ";
        }
        cout << endl;
        base = base + 2;
    }
    return 0;
}