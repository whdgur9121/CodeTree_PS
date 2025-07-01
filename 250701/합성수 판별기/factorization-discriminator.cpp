#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 2; i<n; i++) {
        if(n%i == 0) {
            cout << "C" << endl;
            return 0;
        }
    }

    cout << "N" << endl;

    return 0;
}