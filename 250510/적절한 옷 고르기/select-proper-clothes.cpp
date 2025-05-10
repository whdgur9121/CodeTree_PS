#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
int s[200], e[200], v[200];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> s[i] >> e[i] >> v[i];
    }

    vector<vector<int>> dp(M + 1, vector<int>(N, -1)); // -1로 초기화

    for (int i = 0; i < N; ++i) {
        if (s[i] <= 1 && 1 <= e[i]) {
            dp[1][i] = 0;
        }
    }

    for (int d = 2; d <= M; ++d) {
        for (int i = 0; i < N; ++i) {
            if (s[i] <= d && d <= e[i]) {
                for (int j = 0; j < N; ++j) {
                    if (s[j] <= d - 1 && d - 1 <= e[j] && dp[d - 1][j] != -1) {
                        dp[d][i] = max(dp[d][i], dp[d - 1][j] + abs(v[j] - v[i]));
                    }
                }
            }
        }
    }

    int max_satisfaction = 0;
    for (int i = 0; i < N; ++i) {
        max_satisfaction = max(max_satisfaction, dp[M][i]);
    }

    cout << max_satisfaction << endl;

    return 0;
}
