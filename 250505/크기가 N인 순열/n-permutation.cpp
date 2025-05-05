#include <iostream>

using namespace std;

int n;
int arr[10];
int vision[10];

void recursion(int depth) {
    if(depth == n) {
        for(int i = 0; i<10; i++) {
            vision[i] = 0;
        }
        for(int i = 0; i<10; i++) {
            vision[arr[i]]++;
        }
        for(int i = 1; i<10; i++) {
            //cout << vision[i] << " ";
            if(vision[i] >= 2) {
                return;
            }
        }
        for(int i = 0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for(int i = 1; i<=n; i++) {
        arr[depth] = i;
        recursion(depth+1);
    }
}

int main() {
    cin >> n;

    // Please write your code here.
    for(int i = 0; i<10; i++) {
        arr[i] = 0;
    }

    recursion(0);

    return 0;
}
