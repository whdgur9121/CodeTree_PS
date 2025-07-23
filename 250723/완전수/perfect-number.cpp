#include <iostream>

using namespace std;

int start;
int ended;

int main() {
    cin >> start >> ended;

    // Please write your code here.
    int cnt = 0;
    for(int i = start; i<= ended; i++) {
        int hope = 0;
        for(int k = 1; k<i; k++) {
            if(i % k == 0) {
                hope = hope + k;
            }
        }
        if(hope == i) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
