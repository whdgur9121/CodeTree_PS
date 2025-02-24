#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 3;
    int b = 5;

    int exchange = a;

    a = b;
    b = exchange;

    cout << a << endl << b << endl;
    return 0;
}