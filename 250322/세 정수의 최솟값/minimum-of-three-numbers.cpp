#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int min;
    for(int i = 0; i<3; i++) {
        cin >> a;
        if(i == 0) {
            min = a;
        }
        if(min > a) {
            min = a;
        }
    }

    cout << min << endl;
    return 0;
}