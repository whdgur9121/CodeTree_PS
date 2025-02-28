#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char charactor;
    cin >> charactor;

    if(charactor == 'S') {
        cout << "Superior" << endl;
    }
    else if(charactor == 'A') {
        cout << "Excellent" << endl;
    }
    else if(charactor == 'B') {
        cout << "Good" << endl;
    }
    else if(charactor == 'C') {
        cout << "Usually" << endl;
    }
    else if(charactor == 'D') {
        cout << "Effort" << endl;
    }
    else {
        cout << "Failure" << endl;
    }
    return 0;
}