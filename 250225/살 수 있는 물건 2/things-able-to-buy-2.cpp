#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0;
    cin >> a;

    if(a>= 3000) {
        cout << "book" << endl;
    }
    else if(a >= 1000) {
        cout << "mask" << endl;
    }
    else if(a >= 500) {
        cout << "pen" << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}