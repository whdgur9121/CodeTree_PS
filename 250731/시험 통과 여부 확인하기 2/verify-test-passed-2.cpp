#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    bool *arr = new bool[n];

    int person = 0;

    for(int i = 0; i<n; i++) {
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;

        cin >> a >> b >> c >> d;

        if((a+b+c+d) / 4 >= 60) {
            arr[i] = true;
            person++;
        }
        else {
            arr[i] = false;
        }
    }

    for(int i = 0; i<n; i++) {
        if(arr[i]) {
            cout << "pass" << endl;
        }
        else {
            cout << "fail" << endl;
        }
    }
    cout << person;
    return 0;
}