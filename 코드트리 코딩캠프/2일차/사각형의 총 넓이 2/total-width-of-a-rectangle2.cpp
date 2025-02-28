#include <iostream>

using namespace std;

int N;
int x1[10], y1[10];
int x2[10], y2[10];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }

    // Please write your code here.

    int arr[201][201];
    for(int i = 0; i<201; i++) {
        for(int k = 0; k <201; k++) {
            arr[i][k] = 0;
        }
    }

    for(int i = 0; i<N; i++) {
        int str_x = x1[i] + 100;
        int fin_x = x2[i] + 99;

        int str_y = y1[i] + 100;
        int fin_y = y2[i] + 99;

        for(int k = str_x; k<=fin_x; k++) {
            for(int z = str_y; z<=fin_y; z++) {
                arr[k][z]++;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i<201; i++) {
        for(int k = 0; k <201; k++) {
            if(arr[i][k] != 0) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}