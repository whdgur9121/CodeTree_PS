#include <iostream>

using namespace std;

int n;
int arr[100000];

int max(int num1, int num2) {
    if(num1 > num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } //여기까지 배열이 채워짐

    // Write your code here!
    int dp[100000]; //해당 index까지의 최댓값 저장하는 배열
    dp[0] = arr[0]; //효율을 높이기 위해 for문 밖에 구현

    for(int i = 1; i < n; i++) {
        dp[i] = max(dp[i-1] + arr[i], arr[i]);
    } //dp에 index 저장

    int max = dp[0]; //최댓값 찾기
    for(int i = 0; i < n; i++) {
        if(max < dp[i]) {
            max = dp[i];
        }
    }
    cout << max;

    return 0;
}

//시간을 줄이려면 두번째 포문이 0으로 가면 안된다.
    //최소 변수를 설정해서, 그 아래로 가도록 하면 안된다.
    //더 작아지는 경우는 결국 음수가 되거나 0인 경우
    //그렇다면 음수가 될 때의 cnt를 기억하면 되지 않을까?

    //시간이 지나치게 초과되는 경우는 어떡해야 하나?
    //기본 개념을 보니 같은 값이면 이전으로 안가도 된다고 한다.
    //그렇다면, 같을 때도 sub_cnt를 조정해주면 되는 것 아닌가?

    //num은 끝까지 진행되니까, 이를 활용할 수 있다면?
    //num이 최대일 때의 index를 기억한다.
    //2번째 for문이 종료될 때 index에서 기억한 max와 num이 같다면 index를?

    //for문을 돌 때마다 초기화가 되는 변수를 신경써보자
    //num을 계속 더할 이유가 있을까?
    //그냥 이전 max를 기억하고, 거기에 양수가 오면 + 하면 되는 것 아닌가?
    /*갈아엎기 전 기존 코드
     int max = 0;
    int sub_cnt = 0;
    int index = 0;
    int index_num = 0;
    for(int cnt = 0; cnt<n; cnt++) {
        if(cnt == 0) {
            max = arr[cnt];
        }
            int num = 0;
            for(int i = cnt; i>=sub_cnt; i--) {
                num = num + arr[i];
                if(num > max) {
                    max = num;
                    index = i;
                }
                if(num <= 0) {
                    sub_cnt = i;
                    break;
                }
                if(index_num != 0) {
                    index_num = index_num + arr[i];
                }
                if(index_num == num) {
                    sub_cnt = index;
                }
        }
    }
    cout << max;
    */

    //최댓값을 만들 때, 최댓값을 만드는 index들을 기억한다?
    //연속되면서 양수가 들어오면 최댓값을 갱신하고
    //연속되지 않으면 기억하지 않는다?
    //이전에 음수가 들어왔어도 들어오는 index가 크면 다시 잇는다?
    //머리로 부딪혀서 풀기에는 무리가 있다.
    //점화식을 세워서 건실하게 접근하자

    //dp라는 배열을 만들고, 해당 index까지의 최댓값을 저장하는 방식으로 진행한다.
    //완전탐색은 O(n^2)이기에 100,000에서는 해결할 수 없다.