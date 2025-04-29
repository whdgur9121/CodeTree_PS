#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    // Please write your code here.
    int dx = 0;
    int dy = 0;

    for(int i = 0; i<n; i++) {
        if(dir[i] == 'N') {
            dy = dy + dist[i];
        }
        else if(dir[i] == 'E') {
            dx = dx + dist[i];
        }
        else if(dir[i] == 'S') {
            dy = dy - dist[i];
        }
        else {
            dx = dx - dist[i];
        }
    }

    cout << dx << " " << dy;

    return 0;
}