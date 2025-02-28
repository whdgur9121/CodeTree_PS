#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int tem = 0;
    cin >> tem;

    if(tem < 0) {
        cout << "ice" << endl;
    }
    else if(tem >= 100) {
        cout << "vapor" << endl;
    }
    else {
        cout << "water" << endl;
    }
    return 0;
}