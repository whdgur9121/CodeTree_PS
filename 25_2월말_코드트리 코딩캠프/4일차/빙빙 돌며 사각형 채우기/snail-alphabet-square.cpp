#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    char arr[n][m];
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            arr[i][j] = '0';
        }
    }

    char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 
    'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
    'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    int x = 0;
    int dx[4] = {0, 1, 0, -1};

    int y = 0;
    int dy[4] = {1, 0, -1, 0};

    int dir_num = 0;

    for (int i = 0; i < n*m; i++) {
        arr[x][y] = alpha[i % 26];

        int Dx = x + dx[dir_num];
        int Dy = y + dy[dir_num];
        //항상 x와 y의 관계를 잘 파악하고 있어야 함
        if(Dx > n-1 || Dx < 0 || Dy > m-1 || Dy < 0) {
            dir_num = (dir_num +1) % 4;
            //cout << "now : " << i << " and arr : " << x << " " << y << "and dir_num : " << dir_num << endl;
        }
        else if(arr[Dx][Dy] != '0') {
            dir_num = (dir_num +1) % 4;
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

    // Please write your code here.

    return 0;
}
