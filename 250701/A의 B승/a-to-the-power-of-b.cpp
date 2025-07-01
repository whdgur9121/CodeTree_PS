#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int mul = a;

    if(b == 0) {
        cout << 1 << endl;
        return 0;
    }

    for(int i = 1; i<b; i++) {
        a = a * mul;
    }

    cout << a;
    return 0;
}