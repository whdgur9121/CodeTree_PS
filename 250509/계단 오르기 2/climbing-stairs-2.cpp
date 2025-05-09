#include <iostream>
#include <algorithm>

using namespace std;

int n;
int coin[1001];
int dp[1001][3]; // [층][연속 1칸 오르기 횟수]

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> coin[i];
    }

    // 초기 조건 설정
    dp[1][1] = coin[1];

    if (n >= 2) {
        dp[2][0] = coin[2];               // 2칸 올라오기
        dp[2][2] = dp[1][1] + coin[2];    // 1칸 + 1칸
    }

    // DP 계산
    for (int i = 3; i <= n; i++) {
        dp[i][0] = max({dp[i - 2][0], dp[i - 2][1], dp[i - 2][2]}) + coin[i];
        dp[i][1] = dp[i - 1][0] + coin[i];
        dp[i][2] = dp[i - 1][1] + coin[i];
    }

    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
    return 0;
}


