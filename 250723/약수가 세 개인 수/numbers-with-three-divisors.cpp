#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;

    // Please write your code here.
    int cnt = 0;
    for(int i = st; i<=ed; i++) {
        int in_cnt = 0;
        for(int k = 1; k<=i; k++) {
            if(i % k == 0) {
                in_cnt++;
            }
        }
        if(in_cnt == 3) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
