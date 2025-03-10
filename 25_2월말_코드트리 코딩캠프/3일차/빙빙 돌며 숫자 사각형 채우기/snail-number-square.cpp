#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int M = 0;
    int N = 0;
    cin >> M >> N; //입력 항상 신경쓰기

    int arr[M][N];
    for(int i = 0; i<M; i++) {
        for(int k = 0; k<N; k++) {
            arr[i][k] = 0;
        }
    }

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int dir_num = 0; //방향 항상 신경쓰기

    int x = 0;
    int y = 0;

    int num = 1;

    for(int i = 0; i < N*M; i++) {
        arr[x][y] = num;
        num++;

        int Dx = x + dx[dir_num];
        int Dy = y + dy[dir_num];

        if(Dx > M-1 || Dx < 0 ) {
            dir_num = (dir_num+1)%4;
        }
        else if(Dy > N-1 || Dy < 0 ) {
            dir_num = (dir_num+1)%4;
        } //M으로 넣었다 오답
        else if(arr[Dx][Dy] != 0) {
            dir_num = (dir_num+1) % 4;
        } //조건 잘 생각하기

        x = x + dx[dir_num];
        y = y + dy[dir_num];
    }


    for(int i = 0; i<M; i++) {
        for(int k = 0; k<N; k++) {
            cout << arr[i][k] << " ";
        }
        cout << endl;
    }
    return 0;
}