#include <iostream>

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    // Please write your code here.
    int arr[2001][2001];
    for(int i = 0; i<2001; i++) {
        for(int k = 0; k<2001; k++) {
            arr[i][k] = 0;
        }
    }

    for(int i = x1[0]+1000; i<=x2[0] +999; i++) {
        for(int k = y1[0] + 1000; k<=y2[0] + 999; k++) {
            arr[i][k] = 1;
        }
    } //A 사각형 그리기

    for(int i = x1[1]+1000; i<=x2[1] +999; i++) {
        for(int k = y1[1] + 1000; k<=y2[1] + 999; k++) {
            arr[i][k] = 1;
        }
    } //B 사각형 그리기

    for(int i = x1[2]+1000; i<=x2[2] +999; i++) {
        for(int k = y1[2] + 1000; k<=y2[2] + 999; k++) {
            arr[i][k] = 0;
        }
    } //M 사각형만큼의 구획 지우기

    int cnt = 0;
    for(int i = 0; i<2001; i++) {
        for(int k = 0; k<2001; k++) {
            if(arr[i][k] == 1) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}