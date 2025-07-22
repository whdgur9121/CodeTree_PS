#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 1; i<=n; i++) {
        if(i%2 == 1) {
            cout << "*" << endl;
        }
        else {
            for(int k = 0; k<i; k++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}