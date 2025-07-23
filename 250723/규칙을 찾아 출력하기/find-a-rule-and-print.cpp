#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int space = n-2;
    int star = 0;

    for(int i = 1; i<=n; i++) {
        if(i == 1 || i == n) {
            for(int k = 0; k<n; k++) {
                cout << "* ";
            }
            cout <<endl;
        }
        else {
            cout << "* ";
            for(int k = 0; k<star; k++) {
                cout << "* ";
            }
            for(int k = space; k>0; k--) {
                cout << "  ";
            }
            cout << "* ";
            cout << endl;
            space--;
            star++;
        }
    }
    return 0;
}