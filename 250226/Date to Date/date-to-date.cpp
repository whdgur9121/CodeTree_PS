#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    int month[12];

    month[0] = 31;
    month[1] = 28;
    month[2] = 31;
    month[3] = 30;
    month[4] = 31;
    month[5] = 30;
    month[6] = 31;
    month[7] = 31;
    month[8] = 30;
    month[9] = 31;
    month[10] = 30;
    month[11] = 31;

    int cnt = 1;

    while(d1 != d2 || m1 != m2) {
        d1++;
        cnt++;
        if(d1 > month[m1-1]) {
            m1++;
            d1 = 1;
            //배열 index에서 실수가 있었음
        }
    }

    cout << cnt << endl;

    return 0;
}