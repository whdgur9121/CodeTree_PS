#include <iostream>
using namespace std;


int main() {
    // Please write your code here.

    cout << fixed;
    cout.precision(2);
    
    double cnt = 0;
    double num = 0;

    while(1) {
        int age = 0;
        cin >> age;

        if(age > 29) {
            cout << num/cnt << endl;
            break;
        }
        num = num + age;
        cnt++;
    }
    return 0;
}