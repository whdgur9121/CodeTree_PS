#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_math = 0;
    int a_eng = 0;
    int b_math = 0;
    int b_eng = 0;
    cin >> a_math >> a_eng >> b_math >> b_eng;

    if( a_math > b_math && a_eng > b_eng) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }


    return 0;
}