#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    cin >> n;

    for(int i =2; i<n; i++) {
        if(n%i == 0) {
            cout << "C" << endl;
            return 0;
        }
    }

    cout << "P" << endl;
    return 0;
}