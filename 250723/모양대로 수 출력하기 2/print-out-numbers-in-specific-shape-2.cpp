#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 2;

    for(int i = 0; i<n; i++) {
        for(int k = 0; k<n; k++) {
            if(cnt == 10) {
                cnt = 2;
            }
            cout << cnt << " ";
            cnt = cnt + 2;
        }
        cout << endl;
    }
    return 0;
}