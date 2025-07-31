#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10] = {};
    int last;
    for(int i = 0; i<10; i++) {
        cin >> arr[i];

        if(arr[i] == 0) {
            break;
        }

        last = i;
    }

    for(int i = last; i>= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}