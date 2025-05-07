#include <iostream>
#include <queue>

using namespace std;

int n, h, m;
int grid[100][100];
int solution[100][100];

int main() {
    cin >> n >> h >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    //N*N 격자는 0, 1, 2, 3으로만 이루어져있다.
    //H명은 겹치지 않게 서고, 비를 피하는 공간은 M개가 주어진다.
    //사람마다 비를 피할 수 있는 가장 가까운 공간까지의 거리를 구하라
    
    // 0은 이동 가능
    // 1은 못 움직임
    // 2는 사람이 있음
    // 3은 해당 공간이 비를 피할 수 있음

    //사람은 상하좌우 인접한 곳으로만 움직임 가능 1칸을 1초 동안 이동

    //2일 때 탐색을 시작
    //현재 위치로부터 DFS로 3의 위치를 탐색
    //탐색을 완료하면 distance를 array에 기록

    for(int j = 0; j<n; j++) {
        for(int k = 0; k<n; k++) {
            queue<pair<int, int>> q;
            if(grid[j][k] != 2) {
                continue;
            }
            bool visit[n][n];
            int Distance[n][n];
            for(int s = 0; s<n; s++) {
                for(int j = 0; j<n; j++) {
                    visit[s][j] = false;
                    Distance[s][j] = 0;
                }
            }
            

            int Dist = 0;
            int success = 1;

            int x = j;
            int y = k;
            visit[x][y] = true;
            q.push({x,y});
            Distance[x][y] = Dist;

            while(!q.empty()) {

                x = q.front().first;
                y = q.front().second;
                q.pop();

                int dx[4] = {1, 0, -1, 0};
                int dy[4] = {0, 1, 0, -1};
                if(grid[x][y] == 3) {
                    solution[j][k] = Distance[x][y];
                    success = 0;
                    break;
                }

                for(int i = 0; i<4; i++) {
                    int nx = x + dx[i];
                    int ny = y + dy[i];

                    if(nx > n-1 || nx < 0 || ny > n-1 || ny <0 || grid[nx][ny] == 1) {
                        continue;
                    }
                    if(visit[nx][ny]) {
                        continue;
                    }
                    Distance[nx][ny] = Distance[x][y] + 1;
                    visit[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
            if(success == 1) {
                solution[j][k] = -1;
            }


        }
    }

    for(int j = 0; j<n; j++) {
        for(int k = 0; k<n; k++) {
            cout << solution[j][k] << " ";
        }
        cout << endl;
    }

    return 0;
}
