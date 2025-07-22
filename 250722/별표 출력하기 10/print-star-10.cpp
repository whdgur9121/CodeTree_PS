#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >>n;

    int one = 1;
    int two = n;

    for(int i = 1; i<=2*n; i++) {
        if(i%2 == 1) {
            for(int k = 0; k<one; k++) {
                cout << "* ";
            }
            cout << endl;
            one++;
        }
        else {
            for(int k = 0; k<two; k++) {
                cout << "* ";
            }
            cout << endl;
            two--;
        }

    }
    return 0;
}