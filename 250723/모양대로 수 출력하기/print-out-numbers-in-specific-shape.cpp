#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int space = 0;
    int number = n;

    for(int i = 0; i<n; i++) {
        number = n;
        for(int j = 0; j<space; j++) {
            cout << "  ";
            number--; 
        }
        for(int j = number; j > 0; j--) {
            cout << j << " ";
        }
        space++;
        cout << endl;
    }
    return 0;
}