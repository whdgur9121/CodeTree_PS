#include <iostream>

using namespace std;

int n, m, t;
int a[20][20];
int r[400], c[400];

int main() {
    cin >> n >> m >> t;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        int a = 0;
        int b = 0;
        cin >> a >> b;
        r[i] = a-1;
        c[i] = b-1;
    }

    // Please write your code here.
    //n은 격자 크기, m은 구슬의 개수, t는 시간
    //r[i], c[i]에 구슬 위치

    //temp로 같은 거를 두고, 구슬의 위치에 1을 둠
    //1회의 operation이 모두 끝나면 2 이상인 곳을 detect
    //detect 되면 0으로 만들기
    //----------------------------------
    //이후 각 구슬을 탐색하기 전, 자신의 위치의 수가 0인지 확인
    //0이면 x, y를 -1로 바꾸어버리고 점프, count--
    //x, y가 0보다 큰 x와 y에 대해서만 연산 시행
    int dx[5] = {-1, 1, 0, 0, 0};
    int dy[5] = {0, 0, -1, 1, 0};

    int temp[n][n];
    for(int i = 0; i<n; i++) {
        for(int k = 0; k<n; k++) {
            temp[i][k] = 0;
        }
    }
    //구슬 위치 기록하기
    for(int i = 0; i<m; i++) {
        temp[r[i]][c[i]]++;
    }

    for(int i = 0; i<t; i++) {
        //temp가 2 이상인 지점을 찾아서 구슬을 없애기
        for(int j = 0; j<m; j++) {
            if(r[j] < 0 || c[j] < 0) {}
            else if(temp[r[j]][c[j]] > 1) {
                r[j] = -1;
                c[j] = -1;
            }
        }
        for(int q = 0; q<n; q++) {
            for(int k = 0; k<n; k++) {
                temp[q][k] = 0;
            }
        }
        
        //옮겨주기
        for(int j = 0; j<m; j++) {
            //좌표가 음수면 아무것도 안함
            if(r[j] < 0 || c[j] < 0) {}
            //좌표가 음수가 아닐 경우
            else {
                int x = r[j];
                int y = c[j];
                int max = a[x][y];
                int max_num = 4;
                for(int dir = 0; dir < 4; dir++) {
                    if(x+dx[dir] < 0 || x+dx[dir] == n || y+dy[dir] < 0 || y+dy[dir] == n) {}
                    else if(max < a[x+dx[dir]][y+dy[dir]]) {
                        max = a[x+dx[dir]][y+dy[dir]];
                        max_num = dir;
                    }
                }
                r[j] = x+dx[max_num];
                c[j] = y+dy[max_num];
            }
        }
        //기록하기
        for(int q = 0; q<m; q++) {
        temp[r[q]][c[q]]++;
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(temp[i][j] == 1) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
