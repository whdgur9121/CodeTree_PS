#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double a = 0;
    double b = 0;
    cin >> a >> b;

    double mean = (a+b) / 2;
    double sum = a+b;

    cout << sum;

    cout << fixed;
    cout.precision(1);

    cout << " " << mean << endl;
    return 0;
}