#include <iostream>
#include<string>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;
    cout.precision(2);
    
    string s = "";
    double a = 0;
    double b = 0;
    cin >> s >> a >> b;

    cout << s << endl << a << endl << b << endl;
    return 0;
}