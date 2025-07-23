#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 0; i<n; i++) {
        int a, b;
        cin >> a >> b;

        for(int i = a+1; i<=b; i++) {
            a = a * i;
        }

        cout << a << endl;
    }
    return 0;
}