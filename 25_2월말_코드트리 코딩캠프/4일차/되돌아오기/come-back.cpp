#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N = 0;
    cin >> N;

    int dir_num[N];
    int dis[N];
    for(int i = 0; i < N; i++) {
        char dir;
        cin >> dir >> dis[i];
        if(dir == 'N') {
            dir_num[i] = 1;
        }
        else if(dir == 'S') {
            dir_num[i] = 3;
        }
        else if(dir == 'E') {
            dir_num[i] = 0;
        }
        else if(dir == 'W') {
            dir_num[i] = 2;
        }
    }

    int x = 0;
    int y = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int time = 0;

    for(int i = 0; i<N; i++) {
        int direction = dir_num[i];
        for(int k = 0; k<dis[i]; k++) {
            time++;
            x = x + dx[direction];
            y = y + dy[direction];
            if(x == 0 && y == 0) {
                cout << time << endl;
                return 0;
            }

        }
    }
    
    cout << -1 << endl;
    return 0;
}