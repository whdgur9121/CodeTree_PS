#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    cout.precision(1);
    
    double a = 0;
    cin >> a;

    double b = a * 30.48;

    cout << b;
    return 0;
}