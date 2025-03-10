#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    //끝점에서 닫는 경우도 포함하므로, 위치라고 볼 수 있음

    int arr[101];
    for(int i = 0; i <101; i++) {
        arr[i] = 0;
    }

    for(int i = 0; i<n; i++) {
        int start = x1[i];
        int finish = x2[i];

        for(int k = start; k<=finish; k++) {
            arr[k]++;
        }
    }

    int max = 0;

    for(int i = 0; i<101; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    cout << max;

    return 0;
}