#include <iostream>

using namespace std;

int n;
int r, c;
int a[100][100];

int main() {
    cin >> n >> r >> c;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    // Please write your code here.
    int x = r;
    int dx[4] = {-1, 1, 0, 0};
    int y = c;
    int dy[4] = {0, 0, -1, 1};

    //해당 좌표에서 상하좌우 탐색
    //만약 큰 좌표가 있으면 max_next에 dir_num 저장
    //더 큰 좌표가 있으면 마찬가지로 max_next에 저장
    //이후 max_next를 토대로 이동

    //for문을 4번 반복하여 상하좌우 탐색하기

    while(1) {
        int max_next = -1;
        int max = a[x][y];
        cout << max << " ";
        int count = 0;

        for(int i = 0; i<4; i++) {
            if(x+dx[i] < 0 || x+dx[i] == 100 || y+dy[i] <0 || y+dy[i] == 100) {

            }
            else if(a[x + dx[i]][y+dy[i]] > max && count == 0) {
                max_next = i;
                max = a[x+dx[i]][y+dy[i]];
                count = 1;
            }
        }
        if(max_next != -1) {
            x = x + dx[max_next];
            y = y + dy[max_next];
        }

        if(max_next == -1) {
            break;
        }
    }


    return 0;
}
 