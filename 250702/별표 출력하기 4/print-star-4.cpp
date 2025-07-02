#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 2*n -1;
    int status = 1;

    while(cnt--) {
        if(status) {
            int count = 0;
            for(int i = n; i>0; i--) {
                cout << "* ";
                count++;
            }
            cout << endl;
            if(count == 1) {
                status = 0;
                continue;
            }
            n--;
        }
        else {
            for(int i = 0; i<=n; i++) {
                cout << "* ";
            }
            cout << endl;
            n++;
        }
    }
    return 0;
}