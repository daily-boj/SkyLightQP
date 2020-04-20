#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[100001] = {};
int check[100001] = {};
int parents[100001] = {};

void dfs(int start) {
    check[start] = 1;

    for(int i = 0; i < graph[start].size(); i++) {
        int node = graph[start][i];

        if(check[node]) continue;
        parents[node] = start;
        dfs(node);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < (N - 1); i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    check[1] = 1;
    parents[1] = 0;

    dfs(1);

    for(int i = 2; i <= N; i++) {
        cout << parents[i] << "\n";
    }

    return 0;
}