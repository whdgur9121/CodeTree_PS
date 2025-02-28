#include <iostream>

using namespace std;

string dirs;

int main() {
    cin >> dirs;

    // Please write your code here.

    int x = 0;
    int y = 0;

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

    int dir_num = 1;
    int cnt = 0;
    int while_num = dirs.size();
    while(while_num--) {
        char direction = dirs[cnt];
        if(direction == 'F') {
            x = x + dx[dir_num];
            y = y + dy[dir_num];
        }
        else if(direction == 'L') {
            dir_num = (dir_num + 1) % 4;
        }
        else if(direction == 'R') {
            dir_num = (dir_num + 3) % 4;
        }
        cnt++;
    }

    cout << x << " " << y;

    return 0;
}