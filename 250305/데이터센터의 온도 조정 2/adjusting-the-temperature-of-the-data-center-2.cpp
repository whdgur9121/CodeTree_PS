#include <iostream>

using namespace std;

int N, C, G, H;
int Ta[1000], Tb[1000];


int main() {
    cin >> N >> C >> G >> H;

    for (int i = 0; i < N; i++) {
        cin >> Ta[i] >> Tb[i];
    }

    int max = 0;

    //0에서 1000까지 수행하면 됨
    for(int i = 0; i < 1001; i++) {
        int temp = i;
        int result = 0;

        for(int j = 0; j < N; j++) {
            if(temp < Ta[j]) {
                result = result + C;
            }
            else if(temp > Tb[j]) {
                result = result + H;
            }
            else {
                result = result + G;
            }
        }

        if(i == 0) {
            max = result;
        }
        else if (max < result) {
            max = result;
        }
    }
    cout << max;

    // Please write your code here.
    //C = T < Ta
    //G = Ta < T < Tb
    //H = Tb < T

    return 0;
}