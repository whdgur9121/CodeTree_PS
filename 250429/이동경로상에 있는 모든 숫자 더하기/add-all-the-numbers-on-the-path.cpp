#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];

//T개의 명령어 입력됨
//L은 왼쪽 90도, R은 오른쪽 90도
//F는 바라보는 한칸 이동
//F하면서 더해가기

int main() {
    cin >> N >> T;
    cin >> str;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    // Please write your code here.

    int x = N/2;
    int y = N/2;
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    int count = 0;

    int dir_num = 0;

    for(int i = 0; i<T; i++) {
        if(i == 0) {
            count = board[x][y];
        }
        if(str[i] == 'L') {
            dir_num = (dir_num + 3) % 4;
        }
        else if(str[i] == 'R') {
            dir_num = (dir_num + 1) % 4;
        }
        else if(str[i] == 'F'){
            int next_x = x + dx[dir_num];
            int next_y = y + dy[dir_num];
            if(next_x == N || next_x < 0 || next_y == N || next_y <0) {
            }
            else {
                x = x + dx[dir_num];
                y = y + dy[dir_num];
                count = count + board[x][y];
            }
        }
    }

    cout << count << endl;

    return 0;
}