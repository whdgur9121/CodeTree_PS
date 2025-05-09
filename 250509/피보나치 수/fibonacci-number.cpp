#include <iostream>

using namespace std;

int N;

int sum = 0;

int fibonachi(int a) {
    if(a <= 1) {
        return a;
    }
    sum = fibonachi(a-1) + fibonachi(a-2);

    return sum;
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << fibonachi(N);

    return 0;
}
