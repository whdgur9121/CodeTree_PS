#include <iostream>
#include <algorithm>

using namespace std;

int n;
int grid[100][100];
int dp[100][100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    dp[0][0] = grid[0][0];

    // 첫 번째 행
    for (int j = 1; j < n; j++) {
        dp[0][j] = min(dp[0][j - 1], grid[0][j]);
    }

    // 첫 번째 열
    for (int i = 1; i < n; i++) {
        dp[i][0] = min(dp[i - 1][0], grid[i][0]);
    }

    // 나머지 칸
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            int fromTop = min(dp[i - 1][j], grid[i][j]);
            int fromLeft = min(dp[i][j - 1], grid[i][j]);
            dp[i][j] = max(fromTop, fromLeft);
        }
    }

    cout << dp[n - 1][n - 1] << endl;

    return 0;
}
