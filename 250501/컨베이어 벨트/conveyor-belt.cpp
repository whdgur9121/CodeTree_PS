#include <iostream>

using namespace std;
//초기 123 651
//1초 후 112 365
int n, t;
int u[200];
int d[200];

int main() {
    cin >> n >> t;

    for (int i = 0; i < n; i++) cin >> u[i];

    for (int i = 0; i < n; i++) cin >> d[i];

    // Please write your code here.

    for(int i = 0; i<t; i++) {
        int first_end = u[n-1];
        int last_end = d[n-1];
        for(int j = n-1; j>-1; j--) {
            u[j+1] = u[j];
        }
        u[0] = last_end;
        for(int j = n-1; j>-1; j--) {
            d[j+1] = d[j];
        }
        d[0] = first_end;
    }

    for(int j = 0; j<n; j++) {
        cout << u[j] << " ";
    }
    cout << endl;
    for(int j = 0; j<n; j++) {
        cout << d[j] << " ";
    }
    cout << endl;

    return 0;
}
