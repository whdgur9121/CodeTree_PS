#include <iostream>
#include <queue>

using namespace std;

int n, m;
int a[100][100];
bool visit[100][100];
int Dist[100][100];



int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Please write your code here.

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int x = 0;
    int y = 0;

    queue<pair<int, int>> q;
    q.push({x,y});
    visit[x][y] = true;
    Dist[x][y] = 0;

    while(!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        if(x == n-1 && y == m-1) {
            cout << Dist[x][y];
            break;
        }

        for(int i = 0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx > n-1 || nx < 0 || ny > m-1 || ny < 0 || a[nx][ny] == 0) {
                continue;
            }
            if(visit[nx][ny]) {
                continue;
            }
            visit[nx][ny] = true;
            Dist[nx][ny] = Dist[x][y] + 1;
            q.push({nx, ny});
        }
    }

    return 0;
}
