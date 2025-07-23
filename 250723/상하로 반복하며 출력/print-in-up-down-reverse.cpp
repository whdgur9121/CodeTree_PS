#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 1; i<=n; i++) {
        for(int j = 0; j<n; j++) {
            if(j%2 == 0) {
                cout << i;
            }
            else {
                cout << n-i+1;
            }
        }
        cout << endl;
    }
    return 0;
}