#include <iostream>

using namespace std;

int N;
int M[1000];

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> M[i];
    }

    // Please write your code here.
    int dp[1000];
    for(int i = 0; i<1000; i++) {
        dp[i] = 1;
    }

    
    for(int i = 0; i<N; i++) {
        for(int k = 0; k < i; k++) {
            if(M[k] < M[i]) {
                dp[i] = max(dp[i], dp[k]+1);
            }
        }
    }
    
    int Max = 0;
    for(int i = 0; i<N; i++) {
        if(Max < dp[i]) {
            Max = dp[i];
        }
    }

    cout << Max;
    return 0;
}
