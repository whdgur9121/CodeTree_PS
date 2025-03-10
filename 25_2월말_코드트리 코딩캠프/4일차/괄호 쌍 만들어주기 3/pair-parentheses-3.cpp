#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string A;
    cin >> A;

    int cnt = 0;
    int size = 0;

    while(A[size] == '(' || A[size] == ')') {
        size++;
    }
    
    for(int i = 0; i<size; i++) {
        if(A[i] == '(' ) {
            for(int k = i; k<size; k++) {
                if(A[k] == ')') {
                    cnt++;
                }
            }
        }
    }
    
    cout << cnt << endl;
    return 0;
}