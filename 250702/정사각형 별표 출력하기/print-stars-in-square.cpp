#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 0; i<n; i++) {
        for(int i = 0; i<n; i++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}