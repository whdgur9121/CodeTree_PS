#include <iostream>
#include <string>

using namespace std;

int N, T;

int main() {
    cin >> N >> T;

    int arr1[N];
    int arr2[N];
    for(int i = 0; i<N; i++) {
        cin >> arr1[i];
    }
    for(int i = 0; i<N; i++) {
        cin >> arr2[i];
    }

    for(int i = 0; i<T; i++) {
        int temp1 = arr1[N-1];
        int temp2 = arr2[N-1];

        for(int j = N-1; j>=0; j--) {
            arr1[j] = arr1[j-1];
        }
        for(int j = N-1; j>=0; j--) {
            arr2[j] = arr2[j-1];
        }
        arr2[0] = temp1;
        arr1[0] = temp2;
    }

    for(int i = 0; i<N; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i<N; i++) {
        cout << arr2[i] << " ";
    }

    // Please write your code here.

    return 0;
}