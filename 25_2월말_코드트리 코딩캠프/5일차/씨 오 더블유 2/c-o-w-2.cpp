#include <iostream>
#include <string>

using namespace std;

int n;
string str;


//COW가 얼마나 가능한가?
//C가 있으면 C부터 O 탐색
//O가 있으면 O부터 W 탐색
int main() {
    cin >> n;
    cin >> str;

    // Please write your code here.
    int cnt = 0;

    for(int i = 0; i<n-2; i++) {
        if(str[i] == 'C') {
            for(int j = i+1; j<n-1; j++) {
                if(str[j] == 'O') {
                    for(int k = j+1; k<n; k++) {
                        if(str[k] == 'W') {
                            cnt++;
                        }
                    }
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}