#include <iostream>

using namespace std;

int n;
int arr[100000];

int max(int a, int b) {
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int dp[100000];
    for(int i = 0; i<n; i++) {
        dp[i] = 0;
    }

    // Please write your code here.

    dp[0] = arr[0];
    for(int i = 1; i<n; i++) {
        dp[i] = max(dp[i-1] + arr[i], arr[i]);
    }

    int Max = -100000000;
    for(int i = 0; i<n; i++) {
        if(Max < dp[i]) {
            Max = dp[i];
        }
    }

    cout << Max;


    return 0;
}
