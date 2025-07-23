#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 0;

    for(int i = 0; i<n; i++) {
        if(i%2 == 0) {
            for(int k = 0; k<n; k++) {
                cnt++;
                cout << cnt << " ";
            }
        }
        else if(i%2 == 1) {
            for(int k = 0; k<n; k++) {
                cnt = cnt + 2;
                cout << cnt << " ";
            }
        }
        cout << endl;
    }
    return 0;
}