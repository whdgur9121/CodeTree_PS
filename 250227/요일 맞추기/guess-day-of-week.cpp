#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    int arr[13];
    arr[0] = 0;
    arr[1] = 31;
    arr[2] = 28;
    arr[3] = 31;
    arr[4] = 30;
    arr[5] = 31;
    arr[6] = 30;
    arr[7] = 31;
    arr[8] = 31;
    arr[9] = 30;
    arr[10] = 31;
    arr[11] = 30;
    arr[12] = 31;

    //날짜로 환산
    int date1 = 0;
    for(int i = m1; i >=0; i--) {
        date1 = date1 + arr[i];
    }
    date1 = date1 + d1;
    //cout << "date1 : " << date1 << endl;


    int date2 = 0;
    for(int i = m2; i >=0; i--) {
        date2 = date2 + arr[i];
    }
    date2 = date2 + d2;
    //cout << "date2 : " << date2 << endl;

    int day[7];
    day[0] = date1 % 7;
    day[1] = (date1 + 1) % 7;
    day[2] = (date1 + 2) % 7;;
    day[3] = (date1 + 3) % 7;;
    day[4] = (date1 + 4) % 7;;
    day[5] = (date1 + 5) % 7;;
    day[6] = (date1 + 6) % 7;;

    int date2_day = date2 % 7;
    //cout << "date2_day = " << date2_day;

    if(day[0] == date2_day) {
        cout << "Mon" << endl;
    }
    else if(day[1] == date2_day) {
        cout << "Tue" << endl;
    }
    else if(day[2] == date2_day) {
        cout << "Wed" << endl;
    }
    else if(day[3] == date2_day) {
        cout << "Thu" << endl;
    }
    else if(day[4] == date2_day) {
        cout << "Fri" << endl;
    }
    else if(day[5] == date2_day) {
        cout << "Sat" << endl;
    }
    else if(day[6] == date2_day) {
        cout << "Sun" << endl;
    }
    return 0;
}