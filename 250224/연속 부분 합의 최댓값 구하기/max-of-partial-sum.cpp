#include <iostream>

using namespace std;

int n;
int arr[100000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Write your code here!
    int max = 0;
    for(int cnt = 0; cnt<n; cnt++) {
        if(cnt == 0) {
            max = arr[cnt];
        }

        else {
            int num = 0;
            for(int i = cnt; i>=0; i--) {
                num = num + arr[i];
                if(num > max) {
                    max = num;
                }
            }
        }
    }
    cout << max;

    return 0;
}
