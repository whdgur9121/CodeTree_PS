#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int space = n-1;
    int circle = 1;

    for(int i = 1; i<= n; i++) {
        for(int k = 0; k<space; k++) {
            cout << "  ";
        }
        for(int k = 0; k<circle; k++) {
            cout << "@ ";
        }
        cout << endl;
        space--;
        circle++;
    }
    space = 1;
    circle = n-1;
    for(int i = 0; i<n; i++) {
        for(int k = 0; k<circle; k++) {
            cout << "@ ";
        }
        for(int k = 0; k<space; k++) {
            cout << "  ";
        }
        cout << endl;
        space++;
        circle--;
    }
    return 0;
}