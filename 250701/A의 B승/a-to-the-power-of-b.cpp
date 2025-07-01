#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int mul = a;

    for(int i = 1; i<b; i++) {
        a = a * mul;
    }

    cout << a;
    return 0;
}