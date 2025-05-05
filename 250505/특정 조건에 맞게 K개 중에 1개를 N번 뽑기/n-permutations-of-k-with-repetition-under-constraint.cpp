#include <iostream>

using namespace std;

int K, N;
int arr[10];
int vision = 0;

void recursion(int depth) {
    if(depth == N) {
        for(int i = 0; i<N-2; i++) {
            if(arr[i] == arr[i+1] && arr[i] == arr[i+2]) {
                vision = 1;
            }
        }
        if(vision == 1) {
            vision = 0;
            return;
        }
        for(int i = 0; i<N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for(int i = 1; i<=K; i++) {
        arr[depth] = i;
        recursion(depth+1);
    }
}

int main() {
    cin >> K >> N;

    // Please write your code here.

    recursion(0);

    return 0;
}
