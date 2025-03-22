#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A, B, C;
    cin >> A >> B >> C;

    if(B > A && B < C) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}