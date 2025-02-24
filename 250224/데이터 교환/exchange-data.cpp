#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 5;
    int b = 6;
    int c = 7;
    
    int exchange = a;

    a = c;
    c = b;
    b = exchange;

    cout << a << endl << b << endl << c << endl;
    return 0;
}