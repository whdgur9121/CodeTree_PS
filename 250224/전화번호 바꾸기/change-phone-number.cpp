#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int middle = 0;
    int last = 0;
    char under = '-';

    cin >> middle >> under >> middle >> under >> last;
    
    string first = "010";

    cout << first << under << last << under << middle << endl;
    
    return 0;
}