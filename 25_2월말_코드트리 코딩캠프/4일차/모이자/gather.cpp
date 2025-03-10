#include <iostream>
using namespace std;

int min(int a, int b) {
    if(a > b) {
        return a-b;
    }
    else {
        return b-a;
    }
}

int main() {
    // Please write your code here.
    // 회의 장소를 0번에서 N-1번까지 각각 위치시켰을 때, 할거 한다
    // 할거 한다 : 모든 사람의 이동 거리를 구한다.
    int N;
    cin >> N;

    int arr[N];
    for(int i = 0; i<N; i++) {
        cin >> arr[i];
    }

    int Min = 0;

    for(int i = 0; i<N; i++) {
        int dist = 0;
        for(int k = 0; k<N; k++) {
            dist = dist + min(k, i) * arr[k];
        }
        if(i == 0) {
            Min = dist;
        }
        else if(dist < Min) {
            Min = dist;
        }
    }

    cout << Min;


    return 0;
}