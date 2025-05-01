#include <iostream>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.

    int max = 0;
    for(int i = 0; i<N-2; i++) {
        for(int j = 0; j<N-2; j++) {
            int count = 0;
            for(int k = i; k<i+3; k++) {
                for(int m = j; m < j+3; m++) {
                    if(grid[k][m] == 1) {
                        count++;
                    }
                }
            }
            if(count > max) {
                max = count;
            }
        }
    }

    cout << max << endl;

    return 0;
}
