#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    int date = a;
    int hour = b;
    int min = c;

    if(date < 11 && hour < 11 && min < 11) {

    }

    int result = (a * 24 * 60) + (b * 60) + c;
    int start = (11 * 24 * 60) + (11 * 60) + 11;

    int cnt = 0;

    while(start != result) {
        start++;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}