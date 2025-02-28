#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int h = 0;
    int w = 0;
    cin >> h >> w;

    double b = (10000*w)/(h*h) ;

    cout << b << endl;

    if ( b > 25) {
        cout << "Obesity" << endl;
    }
    return 0;
}