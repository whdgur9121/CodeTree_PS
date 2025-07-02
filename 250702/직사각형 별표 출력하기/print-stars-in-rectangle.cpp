#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    for(int i = 0; i<n; i++) {
        for(int k = 0; k<m; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}