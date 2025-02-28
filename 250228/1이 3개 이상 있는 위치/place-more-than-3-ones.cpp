#include <iostream>

using namespace std;

int n;
int arr[100][100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Please write your code here.
    int dx[4];
    dx[0] = 1;
    dx[1] = 0;
    dx[2] = -1;
    dx[3] = 0;

    int dy[4];
    dy[0] = 0;
    dy[1] = 1;
    dy[2] = 0;
    dy[3] = -1;

    int result = 0;
    for(int i = 0; i<n; i++) {
        for(int k = 0; k<n; k++) {
            int cnt = 0;
            int x = i;
            int y = k;

            if(x-1 >= 0) {
                if(arr[x-1][y] == 1) {
                cnt++;
                }
            }
            if(x+1 <n) {
                if(arr[x+1][y] == 1) {
                cnt++;
                }
            }
            if(y-1 >= 0) {
                if(arr[x][y-1] == 1) {
                cnt++;
                }
            }
            if(y+1 <n) {
                if(arr[x][y+1] == 1) {
                cnt++;
            }
            }

            if(cnt >=3) {
                result++;
            }
        }
    }

    cout <<result;

    return 0;
}