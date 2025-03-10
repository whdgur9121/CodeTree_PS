#include <iostream>
using namespace std;

int max(int a, int b) {
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}

int min(int a, int b) {
    if(a < b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    // Please write your code here.
    int N = 0;
    cin >> N;

    int x[N];
    int y[N];
    for(int i = 0; i<N; i++) {
        cin >> x[i] >> y[i];
    }

    //counting array를 미리 만든다?

    int area = 0;

    for(int i = 0; i<N; i++) {
        int count = 0;
        int min_x = 0;
        int max_x = 0;
    
        int min_y = 0;
        int max_y = 0;
        for(int j = 0; j<N; j++) {
            if(i == j) {
                continue;
            }
            if(min_x == 0) {
                min_x = x[j];
            }
            if(min_y == 0) {
                min_y = y[j];
            } //min이 0이 될 때를 고려해야 함

            min_x = min(x[j], min_x);
            max_x = max(x[j], max_x);

            min_y = min(y[j], min_y);
            max_y = max(y[j], max_y);

            count = (max_x - min_x) * (max_y - min_y);
        }

        if(i == 0) {
            area = count;
        }
        else if (count < area) {
            area = count;
        }
    }

    cout << area;

    //x와 y가 같을 때도 고려해야만 함
    return 0;
}