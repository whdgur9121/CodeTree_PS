#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = n; i>0; i--) {
        for(int k = i; k<=n; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}