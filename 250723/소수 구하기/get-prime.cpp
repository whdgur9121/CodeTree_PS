#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 2; i<=n; i++) {
        int cnt = 0;
        for(int k = 1; k <= i; k++) {
            if(i%k == 0) {
                cnt++;
            }
        }
        if(cnt == 2) {
            cout << i << " ";
        }
    }
    return 0;
}