#include <iostream>
#include <vector>

int n, m, q;
int a[100][100];

void shift_left(int r_idx) {
    if (m == 0) return;
    int temp = a[r_idx][0];
    for (int j = 0; j < m - 1; ++j) {
        a[r_idx][j] = a[r_idx][j + 1];
    }
    a[r_idx][m - 1] = temp;
}

void shift_right(int r_idx) {
    if (m == 0) return;
    int temp = a[r_idx][m - 1];
    for (int j = m - 1; j > 0; --j) {
        a[r_idx][j] = a[r_idx][j - 1];
    }
    a[r_idx][0] = temp;
}

bool can_propagate(int r1_idx, int r2_idx) {
    if (r1_idx < 0 || r1_idx >= n || r2_idx < 0 || r2_idx >= n) {
        return false;
    }
    for (int j = 0; j < m; ++j) {
        if (a[r1_idx][j] == a[r2_idx][j]) {
            return true;
        }
    }
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::cin >> n >> m >> q;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> a[i][j];
        }
    }

    for (int k = 0; k < q; ++k) {
        int r_one_based;
        char d_input_char; // 입력으로 주어진 바람의 방향
        std::cin >> r_one_based >> d_input_char;
        int r_idx = r_one_based - 1;

        // 1. 초기 바람 적용: 대상 행은 입력된 방향과 '반대' 방향으로 이동
        char actual_initial_shift_dir;
        if (d_input_char == 'L') {
            actual_initial_shift_dir = 'R'; // 입력 L -> 실제 R
        } else {
            actual_initial_shift_dir = 'L'; // 입력 R -> 실제 L
        }

        if (actual_initial_shift_dir == 'L') {
            shift_left(r_idx);
        } else {
            shift_right(r_idx);
        }

        // 2. 위쪽으로 전파
        int current_source_row_for_up_prop = r_idx;
        // 다음 전파될 행의 이동 방향은, 방금 r_idx행이 '실제로 이동한 방향'의 반대
        char dir_for_next_up_shift = (actual_initial_shift_dir == 'L' ? 'R' : 'L');

        for (int i = r_idx - 1; i >= 0; --i) {
            if (can_propagate(current_source_row_for_up_prop, i)) {
                if (dir_for_next_up_shift == 'L') {
                    shift_left(i);
                } else {
                    shift_right(i);
                }
                current_source_row_for_up_prop = i;
                dir_for_next_up_shift = (dir_for_next_up_shift == 'L' ? 'R' : 'L');
            } else {
                break;
            }
        }

        // 3. 아래쪽으로 전파
        int current_source_row_for_down_prop = r_idx;
        // 다음 전파될 행의 이동 방향은, 방금 r_idx행이 '실제로 이동한 방향'의 반대
        char dir_for_next_down_shift = (actual_initial_shift_dir == 'L' ? 'R' : 'L');

        for (int i = r_idx + 1; i < n; ++i) {
            if (can_propagate(current_source_row_for_down_prop, i)) {
                if (dir_for_next_down_shift == 'L') {
                    shift_left(i);
                } else {
                    shift_right(i);
                }
                current_source_row_for_down_prop = i;
                dir_for_next_down_shift = (dir_for_next_down_shift == 'L' ? 'R' : 'L');
            } else {
                break;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << a[i][j] << (j == m - 1 ? "" : " ");
        }
        std::cout << "\n";
    }

    return 0;
}
