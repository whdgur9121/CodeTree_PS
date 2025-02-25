#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N = 0;
    cin >> N;

    cout << N*N << endl;
    if(N < 5) {
        cout << "tiny" << endl;
    }
    return 0;
}