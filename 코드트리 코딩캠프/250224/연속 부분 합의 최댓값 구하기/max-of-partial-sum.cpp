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
    for(int k = 0; k<n; k++) {
        if(k == 0) {
            max = arr[0];
        }

        else {
            int num = 0;
            int sub_cnt = 0;
            for(int i = k; i>=sub_cnt; i--) {
                num = num + arr[i];
                if(num > max) {
                    max = num;
                }
                if(num <= 0) {
                    sub_cnt = i;
                }
            }
        }
    }
    cout << max;


    //시간을 줄이려면 두번째 포문이 0으로 가면 안된다.
    //최소 변수를 설정해서, 그 아래로 가도록 하면 안된다.
    //더 작아지는 경우는 결국 음수가 되거나 0인 경우
    //그렇다면 음수가 될 때의 cnt를 기억하면 되지 않을까?
    return 0;
}
