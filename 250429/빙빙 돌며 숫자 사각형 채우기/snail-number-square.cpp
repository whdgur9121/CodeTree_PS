#include <iostream>

using namespace std;

int n, m;
int arr[100][100];

int main() {
    cin >> n >> m;

    // Please write your code here.

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            arr[i][j] = 0;
        }
    }

    int x = 0;
    int y = 0;
    int num = 1;
    int dir_num = 0;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    for(int i = 0; i< n*m; i++) {
        arr[x][y] = num;
        num++;

        int next_x = x + dx[dir_num];
        int next_y = y + dy[dir_num];
        if(next_x == n || next_x < 0 || next_y == m || next_y < 0 || arr[next_x][next_y] != 0) {
            dir_num = (dir_num+1) % 4;
        }

        x = x + dx[dir_num];
        y = y + dy[dir_num];
    }

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}