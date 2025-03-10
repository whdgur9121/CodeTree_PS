#include <iostream>

using namespace std;
//왼쪽이 안채워져 있으면 회전하고 간다.
int n;


int main() {
    cin >> n;
    int arr[n][n];
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            arr[i][j] = 0;
        }
    }

    int x = (n/2);
    int y = (n/2);

    int dx[4] = {0, -1, 0, 1};
    int dy[4] = {1, 0, -1, 0};

    int dir_num = 0;
    int cnt = 1;

    for(int i = 0; i < n * n; i++) {
        arr[x][y] = cnt;
        cnt++;
        
        dir_num = (dir_num + 1) % 4; //이부분 항상 주의
        int Dx = x + dx[dir_num];
        int Dy = y + dy[dir_num];
        if(arr[Dx][Dy] != 0 || i == 0) {
            dir_num--;
            if(dir_num == -1) {
                dir_num = 3;
            }
        }
        x = x + dx[dir_num];
        y = y + dy[dir_num];
    }

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
