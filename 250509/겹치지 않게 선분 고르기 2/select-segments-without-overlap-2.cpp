#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Line {
    int start;
    int end;
    int index; // 원래 순서를 저장 (필수는 아니지만 디버깅에 유용할 수 있음)
};

bool compareLines(const Line& a, const Line& b) {
    if (a.end != b.end) {
        return a.end < b.end;
    }
    return a.start < b.start;
}

int main() {
    int n;
    cin >> n;

    vector<Line> lines(n);
    for (int i = 0; i < n; i++) {
        cin >> lines[i].start >> lines[i].end;
        lines[i].index = i;
    }

    sort(lines.begin(), lines.end(), compareLines);

    int count = 0;
    int last_end = -2001; // 가능한 최소 왼쪽 끝점보다 작은 값으로 초기화

    for (int i = 0; i < n; i++) {
        if (lines[i].start > last_end) {
            count++;
            last_end = lines[i].end;
        }
    }

    cout << count << endl;

    return 0;
}
