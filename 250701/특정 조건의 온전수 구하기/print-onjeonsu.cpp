#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 0;
    cin >> n;

    for(int i = 1; i<=n; i++) {
        if(i % 2 == 0) {
            continue;
        }
        if(i%10 == 5) {
            continue;
        }
        if(i%3 == 0 && i%9 != 0) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}