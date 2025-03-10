#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string N;
    cin >> N; //입력을 잘 보자
    
    int size = 0;
    for(int i = 0; i<100000; i++) {
        if(N[i] != 'L' && N[i] != 'R' && N[i] != 'F') {
            break;
        }
        size++;
    }

    int arr[size]; //arr = {0, 1, 2}
    for(int i = 0; i<size; i++) {
        if(N[i] == 'L') {
            arr[i] = 1;
        }
        else if(N[i] == 'R') {
            arr[i] = 2;
        }
        else if(N[i] == 'F') {
            arr[i] = 0;
        }
    }

    int x = 0;
    int y = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    int dir = 1;
    int time = 0;

    for(int i = 0; i<size; i++) {
        if(arr[i] == 0) {
            x = x + dx[dir];
            y = y + dy[dir];
        }
        else if(arr[i] == 1) {
            dir = (dir+1)%4;
        }
        else if(arr[i] == 2) {
            dir = (dir+3)%4;
        }

        time++;

        if(x == 0 && y == 0) {
            cout << time << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}