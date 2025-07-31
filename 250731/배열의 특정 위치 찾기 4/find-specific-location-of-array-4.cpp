#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10] = {};

    int index = 0;
    for(int i = 0; i<10; i++) {
        cin >> arr[i];

        if(arr[i] == 0) {
            break;
        }

        index = i;
    }

    int result = 0;
    int amount = 0;
    for(int i = 0; i<=index; i++) {
        if(arr[i] %2 == 0) {
            amount++;
            result = result + arr[i];
        }
    }

    cout << amount << " " << result << endl;
    return 0;
}