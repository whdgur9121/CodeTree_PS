#include <iostream>

using namespace std;

int n;
int grid[10][10];
int choice[10];
int Max = 0;

void recursion(int depth) {
    if(depth == n) {
        int trace[n];
        int in_max = 0;
        for(int i = 0; i<n; i++) {
            trace[i] = 0;
        }
        for(int i = 0; i<n; i++) {
            trace[choice[i]]++;
            if(trace[choice[i]] >= 2) {
                return;
            }
        }
        for(int i = 0; i<n; i++) {
            in_max = grid[i][choice[i]] + in_max;
        }
        if(Max < in_max) {
            Max = in_max;
        }
 
        return;
    }

    for(int i = 0; i<n; i++) {
        choice[depth] = i;
        recursion(depth+1);
    }


}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    recursion(0);
    cout << Max;

    return 0;
}
