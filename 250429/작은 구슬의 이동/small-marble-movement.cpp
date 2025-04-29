#include <iostream>

using namespace std;

int n, t; //격자 크기, 진행 시간
int r, c; //r행 c열 초기 위치
char d; //방향, U D R L

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    // Please write your code here.

    int x = r;
    int y = c;
    int dir = 0;
    if(d == 'U') {
        dir = 0;
    }
    else if(d == 'D') {
        dir = 2;
    }
    else if(d == 'R') {
        dir = 1;
    }
    else if(d == 'L') {
        dir = 3;
    }

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    for(int i = 0; i<t; i++) {
        if(x + dx[dir] < 1 || x + dx[dir] > n || y + dy[dir] < 1 || y + dy[dir] > n) {
            dir = (dir+2) % 4;
        }
        else {
            x = x + dx[dir];
            y = y + dy[dir];
        }
    }

    cout << x << " " << y << endl;
    

    return 0;
}