#include <iostream>

using namespace std;

int n;
int cnt = 0;

int arr[10];

void recursion(int depth) {
    if(depth == n) {
        cnt++;
        return;
    }

    for(int i = 1; i<5; i++) {
        if(i == 1) {
            arr[depth] = i;
            recursion(depth+i);
        }
        if(i == 2 && depth+i <=n) {
            arr[depth] = i;
            recursion(depth+i);
        }
        if(i == 3&& depth+i <=n) {
            arr[depth] = i;
            recursion(depth+i);
        }
        if(i == 4 && depth+i <=n) {
            arr[depth] = i;
            recursion(depth+i);
        }
    }
}

int main() {
    cin >> n;

    // Please write your code here.
    // size를 먼저 파악해야겠구나
    
    recursion(0);
    cout << cnt;
    return 0;
}
