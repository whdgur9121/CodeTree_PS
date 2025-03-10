#include <iostream>

using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.

    int arr[201][201];
    for(int i = 0; i<201; i++) {
        for(int k = 0; k<201; k++) {
            arr[i][k] = 0;
        }
    }

    for(int i = 0; i<N; i++) {
        int start_x = x[i] + 100; //1차 때 배열을 잘 만들고 범위 조절을 안했음
        int start_y = y[i] + 100;

        for(int k = start_x; k < start_x+8; k++) {
            for(int j = start_y; j < start_y+8; j++) {
                arr[k][j]++;
                //cout << arr[k][j] << " operate" << endl;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i<201; i++) {
        for(int k = 0; k<201; k++) {
            if(arr[i][k] != 0) {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}