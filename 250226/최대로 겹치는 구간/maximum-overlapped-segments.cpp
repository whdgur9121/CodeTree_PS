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
    int arr[201];
    for(int i = 0 ; i < 201; i++) {
        arr[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        int start = x1[i] + 100;
        int finish = x2[i] + 100;

        for(int k = start; k<=finish; k++) {
            arr[k]++;
        }
    }

    int max = 0;
    for(int i =0; i<201; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    cout << max << endl;

    return 0;
}