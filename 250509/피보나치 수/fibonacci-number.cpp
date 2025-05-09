#include <iostream>

using namespace std;

int N;

int memo[46];



int main() {
    cin >> N;
    for(int i = 0; i<46; i++) {
        memo[i] = 0;
    }

    memo[1] = 1;
    memo[2] = 1;

    for(int i = 3; i<=N; i++) {
        memo[i] = memo[i-1] + memo[i-2];
    }

    cout << memo[N];
   

    // Please write your code here.

    return 0;
}
