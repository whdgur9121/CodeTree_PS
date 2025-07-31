#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    cout << fixed;
    cout.precision(1);

    double arr[8] = {};

    for(int i = 0; i<8; i++) {
        cin >> arr[i];
    }

    double add = 0;
    for(int i = 0; i<8; i++) {
        add = add + arr[i];
    }

    cout << add/8 << endl;
    return 0;
}