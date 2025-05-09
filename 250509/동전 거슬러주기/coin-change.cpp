#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int coin[100];
int dp[10001]; // 금액 M은 최대 10,000까지 가능

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> coin[i];
    }

    const int INF = 10000000;
    
    // 초기값 설정: dp[i] = i원을 만들기 위한 최소 동전 수
    for (int i = 1; i <= M; i++) {
        dp[i] = INF;
    }
    dp[0] = 0; // 0원을 만드는 데는 동전 0개 필요

    // 동적 계획법 수행
    for (int i = 0; i < N; i++) {
        for (int j = coin[i]; j <= M; j++) {
            if (dp[j - coin[i]] != INF) {
                dp[j] = min(dp[j], dp[j - coin[i]] + 1);
            }
        }
    }

    // 출력: dp[M]이 여전히 INF이면 만들 수 없음
    if (dp[M] == INF) {
        cout << -1 << endl;
    } else {
        cout << dp[M] << endl;
    }

    return 0;
}
