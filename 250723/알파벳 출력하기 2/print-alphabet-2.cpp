#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    char out = 'A';
    int space = 0;

    for(int i = 0; i<n; i++) {
        for(int k = 0; k<space; k++) {
            cout << "  ";
        }
        for(int k = 0; k < n-space; k++) {
            cout << out << " ";
            out++;
            if(out == '[') {
                out = 'A';
            }
        }
        space++;
        cout << endl;
    }
    return 0;
}