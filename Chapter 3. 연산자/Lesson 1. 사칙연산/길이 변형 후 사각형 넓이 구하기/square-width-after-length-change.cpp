#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int width = 0;
    int length = 0;
    cin >> length >> width;

    length = length + 8;
    width = width * 3;

    cout << length << endl;
    cout << width << endl;
    cout << length * width << endl;
    return 0;
}