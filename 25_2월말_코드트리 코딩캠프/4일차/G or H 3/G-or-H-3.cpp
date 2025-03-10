#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N = 0;
    cin >> N;

    int K = 0;
    cin >> K;

    int arr[10001];
    for(int i = 0; i<10001; i++) {
        arr[i] = 0;
    }

    for(int i = 0; i<N; i++) {
        int number = 0;
        char alpha;
        cin >> number >> alpha;

        if(alpha == 'G') {
            arr[number] = 1;
        }
        else {
            arr[number] = 2;
        }
    }

    int max = 0;
    
    for(int i = K; i<10001; i++) {
        int cnt = 0;
        //구간은 6이지만 counting은 7을 진행함
        for(int j = 0; j < K+1; j++) {
            cnt = cnt + arr[i-j];
        }

        if(max < cnt) {
            max = cnt;
        }
    }

    cout << max << endl;


    return 0;
}