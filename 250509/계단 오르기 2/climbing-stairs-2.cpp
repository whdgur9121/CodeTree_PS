#include <iostream>
#include <algorithm>

using namespace std;

int n;
int coin[1001];
int dp[1001][3]; // [계단번호][연속 1칸 오름 횟수] → 0, 1, 2

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> coin[i];
    }

    // 초기값
    dp[1][1] = coin[1];

    if (n >= 2) {
        dp[2][0] = coin[2];               // 2칸으로 올라옴
        dp[2][2] = dp[1][1] + coin[2];    // 1칸 + 1칸 (2연속)
    }

    for (int i = 3; i <= n; i++) {
        // 이번에 2칸을 올라올 경우 → 연속 1칸 초기화 (0)
        dp[i][0] = max({dp[i - 2][0], dp[i - 2][1], dp[i - 2][2]}) + coin[i];

        // 이번에 1칸을 올라올 경우 → 이전은 반드시 2칸이었음
        dp[i][1] = dp[i - 1][0] + coin[i];

        // 이번에도 1칸을 올라올 경우 → 이전에 1칸이었어야 함
        dp[i][2] = dp[i - 1][1] + coin[i];
    }

    // 마지막 계단에 도달한 세 가지 상태 중 최대값
    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
    return 0;
}



