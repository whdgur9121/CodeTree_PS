#include <iostream>
#include <string>

using namespace std;

int N;
int s1, e1;
int s2, e2;

int main() {
    cin >> N;

    int arr[N];
    for(int i = 0; i<N; i++) {
        cin >> arr[i];
    }

    cin >> s1 >> e1 >> s2 >> e2;

    int x1 = s1 -1;
    int y1 = e1 -1;
    int x2 = s2 -1;
    int y2 = e2 -1;

    for(int i = x1; i<=y1; i++) {
        arr[i] = 0;
    }

    int size = 0;
    for(int i = 0; i<N; i++) {
        if(arr[i] != 0) {
            size++;
        }
    }

    int arr2[size];
    for(int i = 0; i<size; i++) {
        arr2[i] = 0;
    }
    int index = 0;

    for(int i = 0; i<N; i++) {
        if(arr[i] != 0) {
            arr2[index] = arr[i];
            index++;
        }
    }

    int arr_size = size;
    for(int i = x2; i<=y2; i++) {
        arr2[i] = 0;
        size--;
    }

    cout << size << endl;
    for(int i = 0; i<arr_size; i++) {
        if(arr2[i] != 0) {
            cout << arr2[i] << endl;
        }
    }

    
    


    // Please write your code here.

    return 0;
}