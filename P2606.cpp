#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[101];
int check[101] = {};
int result = 0;

void dfs(int start) {
    if(check[start]) return;

    check[start] = 1;
    result++;

    for(int i = 0; i < graph[start].size(); i++) {
        dfs(graph[start][i]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, E;
    cin >> N >> E;

    for(int i = 0; i < E; i++) {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);

    cout << result - 1;

    return 0;
}