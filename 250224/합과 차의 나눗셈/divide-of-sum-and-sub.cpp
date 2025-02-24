#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0;
    int b = 0;
    cin >> a >>b;

    double sum = a+b;
    double sub = a-b;

    double cal = sum / sub;

    cout << fixed;
    cout.precision(2);

    cout << cal;
    return 0;
}