#include <iostream>
using namespace std;

int n, m;
int grid[100][100];

// 주어진 배열이 행복한 수열인지 판단
bool isHappy(int arr[]) {
    if (m == 1) return true; // M이 1이면 무조건 행복한 수열

    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            count++;
            if (count >= m) return true;
        } else {
            count = 1;
        }
    }
    return false;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            cin >> grid[i][j];

    int result = 0;

    // 각 행 검사
    for (int i = 0; i < n; i++) {
        int row[100];
        for (int j = 0; j < n; j++) 
            row[j] = grid[i][j];
        if (isHappy(row)) result++;
    }

    // 각 열 검사
    for (int j = 0; j < n; j++) {
        int col[100];
        for (int i = 0; i < n; i++) 
            col[i] = grid[i][j];
        if (isHappy(col)) result++;
    }

    cout << result << endl;

    return 0;
}

