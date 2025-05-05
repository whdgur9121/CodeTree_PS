#include <iostream>

using namespace std;

int n, m, k;
int nums[12];
//num에 대해서 숫자를 말을 선택하는 방향으로 가면 될듯
//이렇게 하니 초기화가 안돼서 문제가 생김
//num에 대해서 어떤 말을 선택하는지에 대한 배열을 선언하고
//최종 단계에서 초기화 후에 더하는 방향으로 가야 함
int user[4];
int arr[12];
int Max = 0;

void recursion(int depth) {
    if(depth == n) {
        int in_max = 0;
        for(int i = 0; i<k; i++) {
            user[i] = 1; //1에서 시작이라는 것을 명심해야 함
        } //user 초기화

        for(int i = 0; i<n; i++) {
            user[arr[i]] = user[arr[i]] + nums[i];
        } //user의 이동 수 채우기

        for(int i = 0; i<k; i++) {
            if(user[i] >= m) {
                in_max++;
            }
            //cout << user[i] << " ";
        } //count

        if(in_max > Max) {
            Max = in_max;
        }
        return;
    }

    for(int i = 0; i<k; i++) {
        arr[depth] = i;
        recursion(depth+1);
    }
}

int main() {
    cin >> n >> m >> k;
    //n은 윷을 던지는 숫자(배열로 숫자 주어짐)
    //m은 윷놀이 판의 최대 수(m에 도달하면 1점)
    //k는 말의 수

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    recursion(0);
    cout << Max;

    return 0;
}