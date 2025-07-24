#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    for(int i = 0; i<10; i++) {
        cin >> arr[i];
    }

    int cnt = 0;

    for(int i = 0; i<10; i++) {
        cnt = cnt + arr[i];
    }

    cout << cnt;
    return 0;
}