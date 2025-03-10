#include <iostream>

using namespace std;



//1차원 직선, N개의 바구니
//바구니 안에는 사탕
// 중심점 C를 잡아 [c -k, c+k 구간에 있는 사탕 수 최대]

//input
//N과 K
//N개의 줄에 걸쳐 바구니 좌표, 사탕 개수
int main() {
    int N, K;
    cin >> N >> K;

    int arr[501];
    for(int i = 0; i<501; i++) {
        arr[i] = 0;
    }

    int candy = 0;
    int index = 0;

    for (int i = 0; i < N; i++) {
        cin >> candy >> index;
        arr[index] = arr[index] + candy;
        //문제에 같은 위치에 여러개가 놓인다는 말을 기억했어야 함
    }
    /*
    for(int i = 0; i<101; i++) {
        cout << arr[i] << " " ;
    }
    */

    int max = 0;
    for(int i = K; i <= 501-K; i++) {
        //구간 실수, 실제 counting은 배열의 길이만큼
        int cnt = 0;
        //cout << "Operation" << endl;
        for(int j = i - K; j <= i+K; j++) {
            cnt = cnt + arr[j];
            //cout << arr[j] << " ";
        }
        //cout << endl;
        if(cnt > max) {
            max = cnt;
        }
    }

    cout << max;

    // Please write your code here.

    return 0;
}