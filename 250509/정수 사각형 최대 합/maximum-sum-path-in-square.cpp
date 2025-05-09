#include <iostream>

using namespace std;

int max(int a, int b) {
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
    
}

int n;
int grid[100][100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.

    int dp[100][100];
    for(int i = 0; i<100; i++) {
        for(int k = 0; k<100; k++) {
            dp[i][k] = 0;
        }
    }
    dp[0][0] = grid[0][0];

    //범위를 벗어나면 0을 넣어주면 될듯
    for(int i = 1; i<n; i++) {
        for(int k = 0; k<n; k++) {
            if(k-1 < 0) {
                dp[i][k] = grid[i][k] + max(dp[i][k-1], dp[i-1][k]);
            }
            else {
                dp[i][k] = grid[i][k] + max(dp[i][k-1], dp[i-1][k]);
            }
        }
    }

    int Max = 0;
    for(int i = 0; i<n; i++) {
        if(Max < dp[n-1][i]) {
            Max = dp[n-1][i];
        }
    }

    cout << Max;



    return 0;
}
