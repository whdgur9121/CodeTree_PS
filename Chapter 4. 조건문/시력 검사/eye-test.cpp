#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double right = 0;
    double left = 0;
    cin >> right >> left;

    if(right >= 1 && left >= 1) {
        cout << "High" << endl;
    }
    else if(right >= 0.5 && left >= 0.5) {
        cout << "Middle" << endl;
    }
    else {
        cout << "Low" << endl;
    }
    return 0;
}