#include <iostream>

using namespace std;

int n, m, k_in; // k_in은 1-based 입력
int grid[100][100];

int main() {
    cin >> n >> m >> k_in;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // 1. 시작 열 인덱스 변환 (1-based to 0-based)
    int start_col = k_in - 1;

    // 2. 블록이 안착할 행 찾기
    int final_placement_row = -1;

    // row 0부터 (n-1)까지 블록을 떨어뜨려봄
    // 현재 r 행에 블록의 가장 윗부분이 위치한다고 가정
    for (int r = 0; r < n; ++r) {
        bool can_stop_here = false;

        // 현재 r행에 블록을 놓았을 때, r+1행에 의해 멈추는지 확인
        if (r == n - 1) { // 블록이 바닥에 닿는 경우 (블록의 높이는 1)
            can_stop_here = true;
        } else {
            // 블록의 각 열에 대해 바로 아래 칸을 검사
            for (int col_offset = 0; col_offset < m; ++col_offset) {
                int currentCol = start_col + col_offset;
                // currentCol이 유효한 범위인지 확인할 필요는 없음 (문제 조건상 K의 범위가 이를 보장)
                if (grid[r + 1][currentCol] == 1) { // 바로 아래에 기존 블록이 있는 경우
                    can_stop_here = true;
                    break; // 하나라도 막혀있으면 멈춤
                }
            }
        }

        if (can_stop_here) {
            final_placement_row = r; // 현재 r 행에 블록이 안착함
            break;
        }
    }

    // 3. 블록 배치
    // final_placement_row가 -1이면 뭔가 잘못된 것 (문제 조건상 항상 어딘가에는 놓임)
    // 하지만 문제에서는 항상 첫 행이 0이라고 가정하므로, 최소한 바닥에는 놓일 수 있음.
    if (final_placement_row != -1) {
        for (int col_offset = 0; col_offset < m; ++col_offset) {
            int currentCol = start_col + col_offset;
            grid[final_placement_row][currentCol] = 1;
        }
    }


    // 4. 결과 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << (j == n - 1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}
