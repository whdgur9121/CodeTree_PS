#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    while(1) {
        int a = 0;
        int b = 0;
        char c;
        cin >> a >> b >> c;

        cout << a*b << endl;
        if(c == 'C') {
            break;
        }
    }
    return 0;
}