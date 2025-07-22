#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int one = n;
    int two = 1;

    for(int i = 1; i<=2*n; i++) {
        if(i%2 == 1) {
            for(int k = 0; k<one; k++) {
                cout << "* ";
            }
            one--;
            cout << endl;
        }
        else {
            for(int k = 0; k<two; k++) {
                cout << "* ";
            }
            two++;
            cout << endl;
        }
    }
    return 0;
}