#include <iostream>

using namespace std;

string dirs;

int main() {
    cin >> dirs;

    // Please write your code here.
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int x = 0;
    int y = 0;
    int direction = 0;

    int size = dirs.length();

    for(int i = 0; i<size; i++) {
        if(dirs[i] == 'L') {
            direction = (direction+3) % 4;
        }
        else if(dirs[i] == 'R') {
            direction = (direction+1) % 4;
        }
        else {
            x = x + dx[direction];
            y = y + dy[direction];
        }
    }

    cout << x << " " << y;

    return 0;
}