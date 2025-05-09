#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int N, M, T;
int board[20][20];
vector<pair<int, int>> marbles;

int dx[] = {-1, 1, 0, 0}; // 상, 하, 좌, 우
int dy[] = {0, 0, -1, 1};

bool inRange(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < N;
}

int main() {
    cin >> N >> M >> T;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> board[i][j];

    for (int i = 0; i < M; i++) {
        int r, c;
        cin >> r >> c;
        marbles.push_back({r - 1, c - 1}); // 0-indexed
    }

    while (T--) {
        map<pair<int, int>, int> count; // 위치별 구슬 수
        vector<pair<int, int>> next;

        for (auto [x, y] : marbles) {
            int maxVal = -1, nx = x, ny = y;

            for (int dir = 0; dir < 4; dir++) {
                int tx = x + dx[dir];
                int ty = y + dy[dir];
                if (!inRange(tx, ty)) continue;

                if (board[tx][ty] > maxVal) {
                    maxVal = board[tx][ty];
                    nx = tx;
                    ny = ty;
                }
            }

            next.push_back({nx, ny});
            count[{nx, ny}]++;
        }

        vector<pair<int, int>> survived;
        for (auto pos : next) {
            if (count[pos] == 1)
                survived.push_back(pos); // 살아남은 구슬만
        }

        marbles = survived;
    }

    cout << marbles.size() << endl;
    return 0;
}

