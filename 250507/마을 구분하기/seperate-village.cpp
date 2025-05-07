#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n;
int grid[25][25];
bool visit[25][25];
vector<int> human;
queue<pair<int ,int >> p;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int count = 0;

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            if(grid[i][j] == 1 && visit[i][j] == false) {
                count = 1;

                int x = i;
                int y = j;
                visit[x][y] = true;
                p.push({x, y});

                while(!p.empty()) {
                    int dx[4] = {1, 0, -1, 0};
                    int dy[4] = {0, 1, 0, -1};

                    x = p.front().first;
                    y = p.front().second;
                    p.pop();

                    for(int k = 0; k<4; k++) {
                        int nx = x + dx[k];
                        int ny = y + dy[k];

                        if(nx < 0 || nx > n-1 || ny < 0 || ny > n-1 || grid[nx][ny] == 0) {
                            continue;
                        }
                        if(visit[nx][ny]) {
                            continue;
                        }
                        visit[nx][ny] = true;
                        count++;
                        p.push({nx, ny});
                    }
                    
                }
                human.push_back(count);

            }
        }
    }

    sort(human.begin(), human.end());

    cout << human.size() << endl;

    for(int i = 0; i<human.size(); i++) {
        cout << human[i] << endl;
    }
    return 0;
}
