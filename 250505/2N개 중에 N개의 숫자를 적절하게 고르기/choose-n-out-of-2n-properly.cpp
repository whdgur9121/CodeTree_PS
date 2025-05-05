#include <iostream>

using namespace std;

int n;
int num[20];
int arr[20];
int count[2];
int cnt = 0;

int Min;

void recursion(int depth) {
    if(depth == 2*n) {
        int in_min = 0;
        for(int i = 0; i<2; i++) {
            count[i] = 0;
        }//꼭 초기화 해주기
        for(int i = 0 ;i<2*n; i++) {
            count[arr[i]] = count[arr[i]] + num[i];
        }
        if(count[0] > count[1]) {
            in_min = count[0] - count[1];
        }
        else {
            in_min = count[1] - count[0];
        }

        if(Min > in_min || cnt == 0) {
            Min = in_min;
            cnt++;
        }
        return;
    }

    for(int i = 0; i<2; i++) {
        arr[depth] = i;
        recursion(depth+1);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        cin >> num[i];
    }

    // Please write your code here.

    recursion(0);
    cout << Min;

    return 0;
}
