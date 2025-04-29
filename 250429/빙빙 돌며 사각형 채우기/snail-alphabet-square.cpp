#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // Please write your code here.

    char arr[n][m];
    for(int i = 0; i<n; i++) {
        for(int k = 0; k<m; k++) {
            arr[i][k] = '0';
        }
    }
    
    char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    int x = 0;
    int y = 0;
    int dir_num = 0;
    int index = 0;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    for(int i = 0; i<n*m; i++) {
        arr[x][y] = alpha[index];
        index = (index + 1) % 26;

        int next_x = x + dx[dir_num];
        int next_y = y + dy[dir_num];
        if(next_x == n || next_x < 0 || next_y == m || next_y < 0 || arr[next_x][next_y] != '0') {
            dir_num = (dir_num + 1) % 4;
        }

        x = x + dx[dir_num];
        y = y + dy[dir_num];
    }

    for(int i = 0; i<n; i++) {
        for(int k = 0; k<m; k++) {
            cout << arr[i][k] << " ";
        }
        cout << endl;
    }
    return 0;
}