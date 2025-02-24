#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int year = 0;
    int month = 0;
    int date = 0;
    char middle;

    cin >> year >> middle >> month >> middle >> date;

    middle = '-';

    cout << month << middle << date << middle << year << endl;

    return 0;
}