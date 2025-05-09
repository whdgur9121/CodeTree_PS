#include <iostream>
#include <vector> // 중력 작용 시 임시로 열의 숫자를 저장하기 위해 사용 가능 (필수 아님)

using namespace std;

int n;
int grid[200][200];
int r_in, c_in; // 입력받는 1-based r, c

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> r_in >> c_in;

    // 1. 좌표 변환 (1-based to 0-based)
    int r = r_in - 1;
    int c = c_in - 1;

    // 2. 폭탄 터뜨리기
    if (r >= 0 && r < n && c >= 0 && c < n) { // 중심 좌표가 유효한지 먼저 확인
        int bomb_power = grid[r][c];
        grid[r][c] = 0; // 중심점 폭발

        if (bomb_power > 1) { // bomb_power가 1이면 자기 자신만 터지므로 이미 처리됨
            int explosion_range = bomb_power - 1;

            // 상
            for (int i = 1; i <= explosion_range; ++i) {
                if (r - i >= 0) { // 격자 범위 안
                    grid[r - i][c] = 0;
                } else {
                    break; // 범위를 벗어나면 더 이상 진행할 필요 없음
                }
            }
            // 하
            for (int i = 1; i <= explosion_range; ++i) {
                if (r + i < n) { // 격자 범위 안
                    grid[r + i][c] = 0;
                } else {
                    break;
                }
            }
            // 좌
            for (int i = 1; i <= explosion_range; ++i) {
                if (c - i >= 0) { // 격자 범위 안
                    grid[r][c - i] = 0;
                } else {
                    break;
                }
            }
            // 우
            for (int i = 1; i <= explosion_range; ++i) {
                if (c + i < n) { // 격자 범위 안
                    grid[r][c + i] = 0;
                } else {
                    break;
                }
            }
        }
    }


    // 3. 중력 작용
    // 각 열(column)에 대해 중력을 적용
    for (int j = 0; j < n; ++j) {
        int temp_col[n]; // 현재 열의 중력 적용 후 상태를 저장할 임시 배열
        int current_temp_idx = n - 1; // temp_col의 아래쪽부터 채워나갈 인덱스

        // temp_col을 0으로 초기화
        for (int k = 0; k < n; ++k) {
            temp_col[k] = 0;
        }

        // 원래 grid의 해당 열을 아래에서부터 위로 스캔
        for (int i = n - 1; i >= 0; --i) {
            if (grid[i][j] != 0) { // 0이 아닌 숫자를 발견하면
                temp_col[current_temp_idx] = grid[i][j]; // temp_col의 아래쪽부터 채움
                current_temp_idx--; // 다음 숫자를 채울 위치를 한 칸 위로 이동
            }
        }

        // temp_col의 내용을 원래 grid의 해당 열로 복사
        for (int i = 0; i < n; ++i) {
            grid[i][j] = temp_col[i];
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
