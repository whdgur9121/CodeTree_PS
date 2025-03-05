#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int K;
    cin >> K;

    int arr[N];
    for(int i = 0; i<N; i++) {
        cin >> arr[i];
    }

    int max = 0;
    for(int i = K-1; i<N; i++ ) {
        int cnt = 0;
        for(int k = 0; k<K; k++) {
            cnt = cnt + arr[i - k];
        }

        if(i == 1) {
            max = cnt;
        }
        else if(cnt > max) {
            max = cnt;
        }
    }

    cout << max;
    return 0;
}