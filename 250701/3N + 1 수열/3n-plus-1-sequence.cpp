#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 0;
    while(1) {
        if(n == 1) {
            break;
        }
        cnt++;
        if(n%2 == 0) {
            n = n/2;
        }
        else {
            n = n*3 +1;
        }
    }

    cout << cnt;
    return 0;
}