#include <iostream>
#include<vector>

using namespace std;

int n, m;
int from[10000], to[10000];

bool visit[1001];
vector<int> graph[1001];
int count = 0;

void DFS(int node) {
    visit[node] = true;

    for(int next : graph[node]) {
        if(!visit[next]) {
            count++;
            DFS(next);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> from[i] >> to[i];
    }

    for(int i = 0; i<m; i++) {
        graph[from[i]].push_back(to[i]);
        graph[to[i]].push_back(from[i]);
    } //visit 초기화

    DFS(1);

    cout << count;

    return 0;
}
