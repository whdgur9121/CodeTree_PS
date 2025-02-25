#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A = 0;
    int B = 0;
    cin >> A >> B;

    if(A > B) {
        cout << A-B << endl;
    }
    else {
        cout << B-A << endl;
    }
    return 0;
}