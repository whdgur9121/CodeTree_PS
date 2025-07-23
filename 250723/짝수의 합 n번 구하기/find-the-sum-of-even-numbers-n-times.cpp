#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int tc;
    cin >> tc;

    while(tc--) {
        int st, ed;
        cin >> st >> ed;

        int cnt = 0;

        for(int i = st; i<=ed; i++) {
            if(i % 2 == 0) {
                cnt = cnt + i;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}