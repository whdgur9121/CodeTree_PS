#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    cout << fixed;
    cout.precision(1);

    int arr[10] = {};

    for(int i = 0; i<10; i++) {
        cin >> arr[i];

        if(arr[i] > 249) {
            int cnt = 0;
            for(int k = 0; k<i; k++) {
                cnt = cnt + arr[k];
            }

            cout << cnt << " " << (double)cnt/i;
            return 0;
        }
    }

    int cnt = 0;

    for(int i = 0; i<10; i++) {
        cnt = cnt + arr[i];
    }

    cout << cnt << " " << (double)cnt/10;
    return 0;
}