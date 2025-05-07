#include <iostream>

using namespace std;

int n, m;
int grid[100][100];

int success = 0;

void DFS(int x, int y, int size) {
    if(x == size-1 && y == size-1) {
        success = 1;
        return;
    }
    if(x > size-1 || y > size-1 || grid[x][y] == 0) {
        return;
    }
    int dx[2] = {1, 0};
    int dy[2] = {0, 1};

    for(int i = 0; i<2; i++) {
        DFS(x+dx[i], y+dy[i], size);
    }
}


//이동은 아래와 오른쪽 두 방향 중 인접한 한 칸으로만 이동이 가능
int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    // Please write your code here.

    DFS(0,0,n);
    cout << success;


    return 0;
}
