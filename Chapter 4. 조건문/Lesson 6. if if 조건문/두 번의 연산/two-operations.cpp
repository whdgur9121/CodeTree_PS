#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0;
    cin >> a;

    if(a % 2 == 1) {
        a = a+3;
    }
    if(a % 3 == 0) {
        a = a / 3;
    }

    cout << a << endl;
    return 0;
}