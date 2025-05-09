#include <iostream>
#include <algorithm>

using namespace std;

int n;
int coin[1001];
int dp[1001][3]; // [층][연속 1칸 오름 횟수]

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> coin[i];
    }

    // 초기값: 1층은 1칸 오르기만 가능
    dp[1][1] = coin[1];  // 첫 칸은 1칸으로 도달

    if (n >= 2) {
        // 2칸으로 도달할 경우만 유효 (1칸 + 1칸 = 2연속이라 dp[2][2]도 가능함)
        dp[2][0] = coin[2];             // 0번 연속 (2칸으로 올라옴)
        dp[2][2] = dp[1][1] + coin[2];  // 1칸 + 1칸 (2연속)
    }

    for (int i = 3; i <= n; i++) {
        dp[i][0] = max({dp[i - 2][0], dp[i - 2][1], dp[i - 2][2]}) + coin[i]; // 2칸 오르기
        dp[i][1] = dp[i - 1][0] + coin[i]; // 1칸 오르기 (직전이 2칸)
        dp[i][2] = dp[i - 1][1] + coin[i]; // 1칸 + 1칸
    }

    cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;

    return 0;
}

