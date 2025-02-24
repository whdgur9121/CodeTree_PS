#include <iostream>
#include<string>
using namespace std;

int main() {
    // Please write your code here.
    string s = "";
    string t = "";
    cin >> s >> t;
    string exchange = s;

    s = t;
    t = exchange;

    cout << s << endl << t << endl;
    return 0;
}