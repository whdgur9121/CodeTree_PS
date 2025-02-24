#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int year = 0;
    int month = 0;
    int date = 0;
    char cha = NULL;

    cin >> month >> cha >> date >> cha >> year;
    cha = '.';

    cout << year << cha << month << cha << date << endl;
    return 0;
}