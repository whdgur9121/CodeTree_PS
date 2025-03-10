#include <iostream>

using namespace std;

int X, Y;

int result(int a) {
    int result_num = 0;
    int tem = 1000;
    while(tem > 0) {
        result_num = result_num + (a / tem) % 10;
        tem = tem / 10;
    }
    return result_num;
}

int main() {
    cin >> X >> Y;

    int max = 0;
    for(int i = X; i<=Y; i++) {
        int tr = result(i);
        if(max < tr) {
            max = tr;
        }
    }

    cout << max << endl;
    // Please write your code here.
    //result = result + (num / 10000) % 1000

    return 0;
}