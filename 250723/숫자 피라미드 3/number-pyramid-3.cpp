#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int start = 0;

    for(int i = 1; i<=n; i++) {
        start = i;
        for(int k = 1; k<=i; k++) {
            cout << start << " ";
            start = start + i;
        }
        cout << endl;
    }
    return 0;
}