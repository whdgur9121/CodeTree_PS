#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int count = 1;
    int space = 0;

    for(int i = 0; i<n; i++) {
        for(int k = 0; k<space; k++) {
            cout << "  ";
        }
        for(int k = 0; k<n-space; k++) {
            if(count == 10) {
                count = 1;
            }
            cout << count << " ";
            count++;
        }
        cout << endl;
        space++;
    }
    return 0;
}