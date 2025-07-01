#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if(a % 3 == 0 && b % 3 == 0 && c % 3 == 0 && d % 3 == 0 && e % 3 == 0) {
        cout << 1 << endl;
        return 0;
    }
    cout << 0 << endl;
    return 0;
}