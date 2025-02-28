#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0;
    cin >> a;

    if(a%3 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    if(a%5 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}