#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;

    int n = A.length();
    int m = B.length();

    // dp[i][j]는 A의 처음 i개 문자와 B의 처음 j개 문자의 최장 공통 부분 수열의 길이
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (A[i - 1] == B[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}
