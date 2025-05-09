#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> coin(N);
    for (int i = 0; i < N; i++) {
        cin >> coin[i];
    }

    vector<int> dp(M + 1, -1);
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = coin[i]; j <= M; j++) {
            if (dp[j - coin[i]] != -1) {
                dp[j] = max(dp[j], dp[j - coin[i]] + 1);
            }
        }
    }

    cout << dp[M] << endl;

    return 0;
}
