#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    while(1) {
        int a = 0;
        cin >> a;

        if(a < 25) {
            cout << "Higher" << endl;
        }
        else if(a > 25) {
            cout << "Lower" << endl;
        }
        else {
            cout << "Good" << endl;
            break;
        }
    }
    return 0;
}