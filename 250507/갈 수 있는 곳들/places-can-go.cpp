#include <iostream>
#include <queue>

using namespace std;

int n, k;
int grid[100][100];
int r[10000], c[10000];
bool visit[100][100];

queue<pair<int, int>> q;

int count = 0;

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> grid[i][j];

    for (int i = 0; i < k; i++) cin >> r[i] >> c[i];

    // Please write your code here.
    //r,c는 시작점
    //n은 행의 수
    //0은 이동 가능, 1은 이동 불가 
    //각 경우에 대해서 BFS 수행하면 됨(재귀보단 queue가 쉬운 느낌)

    for(int i = 0; i<k; i++) {
        int x = r[i]-1;
        int y = c[i]-1;

        if(visit[x][y]) {
            continue;
        }

        if(grid[x][y] == 0) {
            count++;
        }

        int dx[4] = {1, 0, -1, 0};
        int dy[4] = {0, 1, 0, -1};
        visit[x][y] = true;
        q.push({x,y});

        while(!q.empty()) {
            x = q.front().first;
            y = q.front().second;
            q.pop();


            for(int j = 0; j<4; j++) {
                int nx = x + dx[j];
                int ny = y + dy[j];
                if(nx>n-1 || nx < 0 || ny > n-1 || ny < 0 || grid[nx][ny] == 1) {
                    continue;
                }
                if(visit[nx][ny]) {
                    continue;
                }
                visit[nx][ny] = true;
                count++;
                q.push({nx, ny});
            }
        }
    }

    cout << count;

    return 0;
}
