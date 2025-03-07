#include <iostream>

using namespace std;

int N;


int main() {
    cin >> N;
    int arr[N][N];
    for(int i = 0; i<N; i++) {
        for(int j = 0; j<N; j++) {
            cin >> arr[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i<N-2; i++) {
        for(int j = 0; j<N-2; j++) {
            int max = 0;
            if(arr[i][j] == 1) {
                max++;
            }
            if(arr[i+1][j] == 1) {
                max++;
            }
            if(arr[i+2][j] == 1 ) {
                max++;
            }
            if(arr[i][j+1] == 1 ) {
                max++;
            }
            if(arr[i+1][j+1] == 1) {
                max++;
            }
            if(arr[i+2][j+1] == 1) {
                max++;
            }
            if(arr[i][j+2] == 1 ) {
                max++;
            }
            if(arr[i+1][j+2] == 1) {
                max++;
            }
            if(arr[i+2][j+2] == 1) {
                max++;
            }
            if(max > cnt) {
            cnt = max;
            }
        }
    }

    cout << cnt << endl;

    

    // Please write your code here.

    return 0;
}