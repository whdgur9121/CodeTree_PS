#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 0;
    int num = 0;
    for(int i = 1; i<=100; i++) {
        cnt = cnt + i;
        if(cnt >= n) {
            num = i;
            break;
        }
    }
    cout << num << endl;
    return 0;
}