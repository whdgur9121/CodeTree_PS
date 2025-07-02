#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 1;

    while(n) {
        for(int i = 0; i<cnt; i++) {
            cout << "*";
        }
        cout << endl;
        cnt = cnt + 2;
        n--;
    }
    return 0;
}