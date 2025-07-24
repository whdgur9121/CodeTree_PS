#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    double arr[6] = {};

    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    cout << fixed;
    cout.precision(1);

    double point = 0;
    for(int i = 0; i<n; i++) {
        point = point + arr[i];
    }
    
    double mean = point/n;
    cout << mean << endl;

    if(mean < 3.0) {
        cout << "Poor";
    }
    else if(mean >= 4.0) {
        cout << "Perfect";
    }
    else {
        cout << "Good";
    }
    return 0;
}