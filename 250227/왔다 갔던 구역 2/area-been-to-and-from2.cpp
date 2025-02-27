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

    int index = 1000; //1차 실수(for문 안에 넣어서 계속 초기화)

    for(int i = 0; i<n; i++) {
        int start = x[i];
        char direction = dir[i];
        

        if(dir[i] == 'L') {
            for(int k = 0; k<start; k++) {
                index--;
                arr[index]++;
            }
        }

        else if(dir[i] == 'R') {
            for(int k = 0; k<start; k++) {
                index++;
                arr[index]++;
            }
        }
        //cout << "index : " << index - 1000 << endl;
    }

    int cal = 0;
    //2차 실수(문제의 정의를 안 봤음)
    for(int i = 0; i<2001; i++) {
        if(arr[i] >= 2) {
            cal++;
        }
    }
    
    cout << cal << endl;

    return 0;
}