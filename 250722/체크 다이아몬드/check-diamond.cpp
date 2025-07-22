#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int star = 1;
    int space = n-1;

    for(int i = 0; i<n; i++) {
        for(int k = 0; k<space; k++) {
            cout << " ";
        }
        for(int k = 0; k<star; k++) {
            cout << "* ";
        }
        space--;
        star++;
        cout << endl;
    }
    star = n-1;
    space = 1;
    for(int i = 0; i<n; i++) {
        for(int k = 0; k < space; k++) {
            cout << " ";
        }
        for(int k = 0; k<star; k++) {
            cout << "* ";
        }
        space++;
        star--;
        cout << endl;
    }
    return 0;
}