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

    dp[1][1] = coin[1]; // 1층에 1칸 올라서 도착

    for (int i = 2; i <= n; i++) {
        // 1칸 올라오기: 이전에 연속 1칸이 1번만 있었던 경우에만 가능
        dp[i][1] = dp[i - 1][0] + coin[i];
        dp[i][2] = dp[i - 1][1] + coin[i]; // 이전도 1칸, 현재도 1칸

        // 2칸 올라오기: 연속 1칸과 무관
        dp[i][0] = max({dp[i - 2][0], dp[i - 2][1], dp[i - 2][2]}) + coin[i];
    }

    int result = max({dp[n][0], dp[n][1], dp[n][2]});
    cout << result << endl;

    return 0;
}
