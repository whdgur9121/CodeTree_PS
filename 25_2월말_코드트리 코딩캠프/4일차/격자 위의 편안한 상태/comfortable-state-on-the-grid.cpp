#include <iostream>

using namespace std;

int N, M;
int r[10000], c[10000];
//편안한 상태면 1
//불편한 상태면 0

int main() {
    cin >> N >> M;
    //N*N 격자, M개 칠하기

    for (int i = 0; i < M; i++) {
        cin >> r[i] >> c[i];
    }

    // Please write your code here.
    int arr[N+2][N+2]; //배열이 넘어가는 경우가 있을 수 있음
    for(int i = 0; i<=N; i++) {
        for(int j = 0; j<=N; j++) {
            arr[i][j] = 0;
        }
    }

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    for(int i = 0; i < M; i++) {
        int x = r[i];
        int y = c[i];

        arr[x][y] = 1;
        
        int cnt = 0;
        for(int j = 0; j < 4; j++) {
            x = x + dx[j];
            y = y + dy[j];
            if(arr[x][y] == 1) {
                cnt ++;
            }
            x = x - dx[j];
            y = y - dy[j];
        }

        if(cnt == 3) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }

    return 0;
}