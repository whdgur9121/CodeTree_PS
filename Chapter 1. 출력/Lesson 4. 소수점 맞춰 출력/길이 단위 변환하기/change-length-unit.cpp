#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    cout.precision(1);

    double a = 9.2 * 30.48;
    double b = 1.3 * 160934;

    cout << "9.2ft = " << a << "cm" << endl;
    cout << "1.3mi = " << b << "cm" << endl;
    return 0;
}