#include <iostream>

using namespace std;

int K, N;
int arr[10];

void recursion(int depth) {
    if(depth == N) {
        for(int i = 0; i<N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for(int i = 1; i<= K; i++) {
        arr[depth] = i;
        recursion(depth+1);
    }
}

int main() {
    cin >> K >> N;
    //1이상 k이하
    //N까지 입력

    // Please write your code here



    recursion(0);
    

    return 0;
}
