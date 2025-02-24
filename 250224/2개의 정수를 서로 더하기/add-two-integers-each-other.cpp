#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0;
    int b = 0;
    cin >> a >> b;

    a = a + b;
    b = b + a;

    cout << a << " " << b << endl;
    return 0;
}