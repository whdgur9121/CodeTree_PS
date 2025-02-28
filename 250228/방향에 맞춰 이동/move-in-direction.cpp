#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
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

    // Please write your code here.
    int dir_num[100];
    for(int i = 0; i<100; i++) {
        if(dir[i] == 'E') {
            dir_num[i] = 0;
        }
        else if(dir[i] == 'N') {
            dir_num[i] = 1;
        }
        else if(dir[i] == 'W') {
            dir_num[i] = 2;
        }
        else if(dir[i] == 'S') {
            dir_num[i] = 3;
        }
    }

    int x = 0;
    int y = 0;

    for(int i = 0; i<n; i++) {
        x = x + dx[dir_num[i]] * dist[i];
        y = y + dy[dir_num[i]] * dist[i];
    }

    cout << x << " " << y << endl;

    

    return 0;
}