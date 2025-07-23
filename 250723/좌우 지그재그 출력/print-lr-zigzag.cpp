#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 1;
    int max = 0;

    for(int i = 0; i<n; i++) {
        if(i%2 == 0) {
            if(i != 0) {
                cnt = cnt + n + 1;
            }
            for(int j = 0; j<n; j++) {
                cout << cnt << " ";
                cnt++;
            }
        }
        else {
            cnt = cnt + n -1;
            for(int j = 0; j<n; j++) {
                cout << cnt << " ";
                cnt--;
            }
        }
        cout << endl;
    }
    return 0;
}