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

    int add = 0;
    for(int i = 0; i<=index; i++) {
        add = add + arr[i];
    }

    cout << fixed;
    cout.precision(1);

    cout << add << " " << (double) add/(index+1) << endl;
    return 0;
}