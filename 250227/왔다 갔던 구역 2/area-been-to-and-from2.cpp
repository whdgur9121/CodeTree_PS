#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.
    //구간의 문제?
    //index가 음수로 가지 않으려면 기준점을 +1000;

    int arr[2001];
    for(int i = 0; i<2001; i++) {
        arr[i] = 0;
    }

    for(int i = 0; i<n; i++) {
        int start = x[i];
        char direction = dir[i];
        
        int index = 1000;

        if(dir[i] == 'L') {
            for(int k = 0; k<start; k++) {
                arr[index]++;
                index--;
            }
        }

        else if(dir[i] == 'R') {
            for(int k = 0; k<start; k++) {
                arr[index]++;
                index++;
            }
        }
    }

    int max = 0;

    for(int i = 0; i<2001; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    
    cout << max << endl;

    return 0;
}