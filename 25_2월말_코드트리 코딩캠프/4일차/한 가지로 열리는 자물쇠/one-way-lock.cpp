#include <iostream>
using namespace std;

int sub(int a, int b) {
    if(a > b) {
        return a-b;
    }
    else {
        return b-a;
    }
}

int main() {
    // Please write your code here.
    int N = 0;
    cin >> N;

    int arr[3];
    for(int i = 0; i<3; i++) {
        cin >> arr[i];
    }

    //가능한 경우의 수는 N*N*N
    //안되는 경우의 수는 1의 수 * 2의 수 * 3의 수

    int first = 0;
    int second = 0;
    int third = 0;

    for(int i = 1; i<=N; i++) {
        if(sub(arr[0], i) >= 3 ) {
            first++;
        }
    }
    for(int i = 1; i<=N; i++) {
        if(sub(arr[1], i) >= 3 ) {
            second++;
        }
    }
    for(int i = 1; i<=N; i++) {
        if(sub(arr[2], i) >= 3 ) {
            third++;
        }
    }

    cout << N*N*N - (first * second * third) << endl;
    return 0;
}