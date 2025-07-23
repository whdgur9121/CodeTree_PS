#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m;
    cin >> m;

    for(int i = 0; i<m; i++) {
        int n;
        cin >> n;
        if(n == 1) {
            cout << 0 << endl;
            continue;
        }

        int cnt = 0;
        while(1) {
            if(n % 2 == 0) {
                n = n/2;
            }
            else {
                n = n*3 +1;
            }
            cnt++;

            if(n == 1) {
                cout << cnt << endl;
                break;
            }

        }
    }
    return 0;
}