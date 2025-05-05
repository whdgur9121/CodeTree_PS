#include <iostream>

using namespace std;

int n;
int grid[10][10];
bool visit[10];
int Max;

int cal_Max(int num1, int num2) {
    if(num1 > num2) {
        return num1;
    }
    else {
        return num2;
    }
}

void recursion(int depth, int current_num) {
    if(depth == n) {
        Max = cal_Max(Max, current_num);
        return;
    }

    for(int i = 0; i<n; i++) {
        if(visit[i]) {
            continue;
        }

        visit[i] = true;
        recursion(depth+1, current_num + grid[depth][i]);
        visit[i] = false;
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
    recursion(0, 0);
    cout << Max;

    return 0;
}
