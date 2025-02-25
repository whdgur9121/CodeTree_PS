#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double a = 0;
    cin >> a;

    if(a >= 1) {
        cout << "High" << endl;
    }
    else if(a >= 0.5) {
        cout << "Middle" << endl;
    }
    else {
        cout << "Low" << endl;
    }
    return 0;
}