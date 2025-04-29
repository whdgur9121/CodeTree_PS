#include <iostream>

using namespace std;

int n;
int grid[100][100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int x = 0;
    int y = 0;
    int count = 0;
    int in_count = 0;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            in_count = 0;
            x = i;
            y = j;
            if(grid[x + dx[0]][y + dy[0]] == 1 && x+dx[0] < n) {
                in_count++;
            }
            if(grid[x + dx[2]][y + dy[2]] == 1 && x+dx[2] >= 0) {
                in_count++;
            }
            if(grid[x + dx[1]][y + dy[1]] == 1 && y+dy[1] < n) {
                in_count++;
            }
            if(grid[x+dx[3]][y + dy[3]] == 1 && y+dy[3] >= 0) {
                in_count++;
            }

            if(in_count > 2) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}