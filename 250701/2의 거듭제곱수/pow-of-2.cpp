#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    cin >> n;

    int cnt = 0;
    while(n != 1) {
        cnt++;
        n = n / 2;
    }

    cout << cnt;
    return 0;
}