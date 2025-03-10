#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    // Please write your code here.

    int x = 0;
    int y = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int dir_num = 0;
    int cnt = 1;

    int arr[n][m];
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < m; k++) {
            arr[i][k] = 0;
        }
    }


    for(int i = 0; i < n*m; i++) {
        arr[x][y] = cnt;
        cnt++;

        int Dx = x + dx[dir_num];
        int Dy = y + dy[dir_num];
        
        if(Dx > n-1 || Dy > m-1 || Dx < 0 || Dy < 0) {
            dir_num = (dir_num+1) % 4;
        }
        else if(arr[Dx][Dy] != 0) {
            dir_num = (dir_num+1) % 4; 
        }
        //index와 value의 관계를 놓치지 말기
        x = x + dx[dir_num];
        y = y + dy[dir_num];
    }

    for(int i = 0; i < n; i++) {
        for(int k = 0; k < m; k++) {
            cout << arr[i][k] << " ";
        }
        cout << endl;
    }

    return 0;
}