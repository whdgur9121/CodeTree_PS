#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 3;

    while(1) {
        int a = 0;
        cin >> a;

        if(a % 2 == 1) {
            continue;
        }

        cout << a / 2 << endl;
        cnt--;
        if(cnt == 0) {
            break;
        }
    }
    return 0;
}