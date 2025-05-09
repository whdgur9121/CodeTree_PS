#include <iostream>
#include <vector> // pair 사용 가능
#include <algorithm> // swap 사용 가능

using namespace std;

int n, m;
int grid[20][20];

// 특정 숫자의 위치를 찾는 함수
// 찾은 위치를 r_pos, c_pos 포인터를 통해 반환
bool find_number_pos(int num_to_find, int& r_pos, int& c_pos) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == num_to_find) {
                r_pos = i;
                c_pos = j;
                return true; // 찾았으면 true 반환
            }
        }
    }
    return false; // 이론상 항상 찾아야 함
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // 8방향 탐색을 위한 행/열 변화량
    // 순서: 북서, 북, 북동, 서, 동, 남서, 남, 남동
    int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    // M번의 턴 실행
    for (int turn = 0; turn < m; ++turn) {
        // 1부터 N*N까지의 숫자를 순서대로 처리
        for (int num_to_move = 1; num_to_move <= n * n; ++num_to_move) {
            int cur_r, cur_c;
            if (!find_number_pos(num_to_move, cur_r, cur_c)) {
                // 이 경우는 발생하지 않아야 함 (문제 조건상 모든 숫자는 격자에 존재)
                continue;
            }

            int max_adj_val = 0; // 인접한 칸 중 가장 큰 값을 저장 (숫자는 1 이상)
            int max_r = cur_r;   // 가장 큰 값을 가진 인접 칸의 행
            int max_c = cur_c;   // 가장 큰 값을 가진 인접 칸의 열 (초기값은 자기 자신, 인접칸 없으면 교환 안됨)
                                 // 문제에서는 "가장 큰 수와 가운데 칸의 수를 교환" 이므로, 인접한 칸이 있다면 반드시 그 중 가장 큰 값을 찾음

            // 8방향 탐색
            for (int i = 0; i < 8; ++i) {
                int nr = cur_r + dr[i];
                int nc = cur_c + dc[i];

                // 격자 범위 확인
                if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
                    if (grid[nr][nc] > max_adj_val) {
                        max_adj_val = grid[nr][nc];
                        max_r = nr;
                        max_c = nc;
                    }
                }
            }
            
            // 가장 큰 인접 숫자를 찾았으면 (max_adj_val > 0 이면 항상 참, N>=2 이면 인접칸은 존재)
            // 현재 숫자와 그 위치의 숫자를 교환
            if (max_adj_val > 0) { // 인접한 칸이 있고 그 중 최댓값을 찾았다는 의미
                                  // 또는 max_r, max_c 가 초기값(cur_r, cur_c)과 다르다면 교환
                swap(grid[cur_r][cur_c], grid[max_r][max_c]);
            }
        }
    }

    // M번의 턴 이후 격자 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << (j == n - 1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}
