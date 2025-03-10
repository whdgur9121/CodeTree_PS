#include <iostream>

using namespace std;

int N;

int subtraction(int a, int b) {
    if(a > b) {
        return a - b;
    }
    else {
        return b - a;
    }
}

int main() {
    cin >> N;

    int x[N], y[N];
    for(int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    //0번째와 N-1번은 제외하지 않음
    //그러나 카운팅은 해야 함
    //cnt = subtraction(x[i], x[i+1]) + subtraction(y[i], y[i+1])
    //제외하는 경우는 i = j일 때
    //이 때 counting은 j+1은 i일 때 j+2로 확인
    //index는 i는 1, j는 0부터 시작
    //i가 제외하는 index
    //j는 실제로 카운팅하는 index

    int min = 0;
    for(int i = 1; i<N-1; i++) {
        int cnt = 0;
        int parameter = 1;
        for(int j = 0; j<N-1; j++) {
            //j의 범위는 N-1이 되어야 함.
            //2개를 비교하기 때문에.
            if(j+1 == i && j+2 < N) {
                parameter = 2;
            }
            else {
                parameter = 1;
            }

            if(i==j) {
                //cout << "배제" << x[j] << y[j] << endl;
            }
            else {
                cnt = cnt + subtraction(x[j], x[j+parameter]) + subtraction(y[j], y[j+parameter]);
                //cout << "now cnt : " << cnt << " X = " << x[j] << " y = " << y[j] << endl;
            }
        }

        if(i == 1 || min > cnt) {
            min = cnt;
        }
    }

    cout << min << endl;

    // Please write your code here.

    return 0;
}
