#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a >> b >> c;

    if(a <= b && a <= c) {
        cout << 1 << " ";
    }
    else {
        cout << 0 << " ";
    }

    if(a == b && b == c) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    
    return 0;
}