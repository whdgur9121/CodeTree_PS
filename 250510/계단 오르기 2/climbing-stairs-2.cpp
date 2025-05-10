#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int coin[1001];
int dp[1001][3];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> coin[i];
    }

    // 초기 조건 설정
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = dp[i][1] = dp[i][2] = -1e9; // 음의 무한대로 초기화
    }

    dp[0][0] = 0;
    if (n >= 1) {
        dp[1][1] = coin[1];
    }
    if (n >= 2) {
        dp[2][0] = coin[2];
        dp[2][2] = coin[1] + coin[2];
    }

    // DP 테이블 채우기
    for (int i = 3; i <= n; i++) {
        dp[i][0] = max({dp[i - 2][0], dp[i - 2][1], dp[i - 2][2]}) + coin[i];
        dp[i][1] = dp[i - 1][0] + coin[i];
        dp[i][2] = dp[i - 1][1] + coin[i];
    }

    // 최종 결과는 n층에 도달했을 때의 최대 동전 개수
    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;

    return 0;
}
