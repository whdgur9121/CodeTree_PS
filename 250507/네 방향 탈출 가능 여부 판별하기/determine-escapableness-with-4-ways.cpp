#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
int a[100][100];
bool visit[100][100];

int success = 0;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Please write your code here.
    queue<pair<int, int>> q;
    visit[0][0] = true;
    q.push({0, 0});

    while(!q.empty()) {
        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, 1, 0, -1};

        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(x == n-1 && y == m-1) {
            success = 1;
            break;
        }
        for(int i = 0; i<4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx > n-1 || ny > m-1 || nx < 0 || ny < 0 || a[nx][ny] == 0) {
                continue;
            }

            if(visit[nx][ny] == true) {
                continue;
            }
            visit[nx][ny] = true;

            q.push({nx, ny});
        }
    }

    cout << success;

    return 0;
}
