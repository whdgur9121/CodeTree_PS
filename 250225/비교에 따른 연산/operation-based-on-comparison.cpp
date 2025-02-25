#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0;
    int b = 0;
    cin >> a >> b;

    if( a > b ) {
        cout << a*b << endl;
    }

    else {
        cout << b/a << endl;
    }
    return 0;
}