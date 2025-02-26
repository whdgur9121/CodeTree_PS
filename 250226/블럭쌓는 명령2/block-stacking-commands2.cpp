#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }

    // Please write your code here.
    int block[101];
    for(int i = 0; i < 101; i++) {
        block[i] = 0;
    }

    for(int i = 0; i<K; i++) {
        int start = A[i];
        int finish = B[i];

        for(int i = start; i<=finish; i++) {
            block[i]++;
        }
    }
    int max = 0;
    for(int i = 0; i<101; i++) {
        if(max < block[i]) {
            max = block[i];
        }
    }

    cout << max << endl;
    return 0;
}