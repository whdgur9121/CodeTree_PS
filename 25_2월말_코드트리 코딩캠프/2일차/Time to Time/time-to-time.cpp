#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;
    //a시 b분, c시 d분
    // Please write your code here.

    int min1 = a*60 + b;
    int min2 = c*60 + d;
    int cnt = 0;

    while(min1 != min2) {
        min1++;
        cnt++;
    }
    cout << cnt;

    return 0;
}