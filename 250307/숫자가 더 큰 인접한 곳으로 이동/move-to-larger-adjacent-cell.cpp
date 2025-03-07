#include <iostream>
#include <string>

using namespace std;

int N, r, c;

int main() {
    cin >> N >> r >> c;

    int arr[N][N];
    for(int i = 0; i<N; i++) {
        for(int j = 0; j<N; j++) {
            cin >> arr[i][j] ;
        }
    }

    int x = r-1;
    int dx[4] = {-1, 1, 0, 0};

    int y = c-1;
    int dy[4] = {0, 0, -1, 1};


    for(int i = 0; i < N*N; i++) {
        cout << arr[x][y] << " ";

        int dir_num = 0;
        int cnt = 0;
        for(int j = 0; j<3; j++) {
            if(arr[x][y] < arr[x + dx[dir_num]][y + dy[dir_num]]) {
                x = x+dx[dir_num];
                y = y+dy[dir_num];
                j = 3;
            }
            dir_num = (dir_num++) % 4;
            cnt++;
        }
        if(cnt == 4) {
            break;
        }
        
        if(arr[x][y] < arr[x + dx[0]][y + dy[0]] && (x + dx[0]) > 0) {
            x = x+dx[0];
            y = y+dy[0];
        }
        else if(arr[x][y] < arr[x + dx[1]][y + dy[1]] && (x + dx[1]) < N) {
            x = x+dx[1];
            y = y+dy[1];
        }
        else if(arr[x][y] < arr[x + dx[2]][y + dy[2]] && (y + dy[2]) > 0) {
            x = x+dx[2];
            y = y+dy[2];
        }
        else if(arr[x][y] < arr[x + dx[3]][y + dy[3]]&& (y + dy[3]) < N) {
            x = x+dx[3];
            y = y+dy[3];
        }
        else {
            break;
        }
    }


    // Please write your code here.

    return 0;
}

/*
if(arr[x][y] < arr[x + dx[0]][y + dy[0]] && (x + dx[0]) > 0) {
            x = x+dx[0];
            y = y+dy[0];
        }
        else if(arr[x][y] < arr[x + dx[1]][y + dy[1]] && (x + dx[1]) < N) {
            x = x+dx[1];
            y = y+dy[1];
        }
        else if(arr[x][y] < arr[x + dx[2]][y + dy[2]] && (y + dy[2]) > 0) {
            x = x+dx[2];
            y = y+dy[2];
        }
        else if(arr[x][y] < arr[x + dx[3]][y + dy[3]]&& (y + dy[3]) < N) {
            x = x+dx[3];
            y = y+dy[3];
        }
        else {
            break;
        }
*/