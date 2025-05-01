#include <iostream>

using namespace std;

int n;
int blocks[100];
int s1, e1;
int s2, e2;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> blocks[i];
    }
    cin >> s1 >> e1;
    cin >> s2 >> e2;

    // Please write your code here.

    int temp1[100];

    for(int i = 0; i<100; i++) {
        temp1[i] = 0;
    }

    int counter = s1-1;
    for(int i = s1; i<=e1; i++) {
        blocks[counter] = 0;
        counter++;
    }

    int index = 0;
    for(int i = 0; i<100; i++) {
        if(blocks[i] != 0) {
            temp1[index] = blocks[i];
            index++;
        }
    }

    counter = s2-1;
    for(int i = s2; i<=e2; i++) {
        temp1[counter] = 0;
        counter++;
    }

    int count = 0;
    for(int i = 0; i<100; i++) {
        if(temp1[i] != 0) {
            count++;
        }
    }

    cout << count << endl;
    for(int i = 0; i<100; i++) {
        if(temp1[i] != 0) {
            cout << temp1[i] << endl;
        }
    }


    return 0;
}
