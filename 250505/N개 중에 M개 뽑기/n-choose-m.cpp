#include <iostream>

using namespace std;

int N, M;
int arr[10];

void recursion(int depth) {
    if(depth == M) {
        for(int i = 0; i<M; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for(int i = 1; i<=N; i++) {
        arr[depth] = i;
        if(depth >=1 && arr[depth] <= arr[depth-1]) {

        }
        else{
            recursion(depth+1);
        }
    }
}

int main() {
    cin >> N >> M;

    // Please write your code here.
    recursion(0);

    return 0;
}
