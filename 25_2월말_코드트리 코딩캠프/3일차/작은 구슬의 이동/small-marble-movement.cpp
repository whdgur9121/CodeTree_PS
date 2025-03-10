#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

//n은 격자, T는 시간
//r과 c는 초기 위치
int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    // Please write your code here.
    int dir_num = 0;
    if(d == 'R') {
        dir_num = 0;
    }
    else if (d == 'D') {
        dir_num = 1;
    }
    else if(d == 'L') {
        dir_num = 2;
    }
    else if(d == 'U') {
        dir_num = 3;
    }

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

    int x = c;
    int y = r;

    while(t--) {
        if(x + dx[dir_num] == 0 || x + dx[dir_num] > n || y + dy[dir_num] == 0 || y + dy[dir_num] > n ) {
            if (x + dx[dir_num] <= 0) {
                dir_num = 0;
            }
            else if(x + dx[dir_num] > n) {
                dir_num = 2;
            }
            if(y + dy[dir_num] <= 0) {
                dir_num = 1;
            }
            else if(y + dy[dir_num] > n) {
                dir_num = 3;
            }
        }
        else {
            x = x + dx[dir_num];
            y = y + dy[dir_num];
        }
        
    }

    cout << y << " " << x;

    return 0;
} 

//행렬과 arr 간의 관계를 헷갈렸음
//U와 D가 반대로 되어 원하는 값이 안나옴