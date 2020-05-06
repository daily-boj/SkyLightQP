#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[2001];
int check[2001] = {};

int flag = 0;

void dfs(int s, int count) {
    if(!flag && count == 5) {
        cout << 1;
        flag = 1;
        return;
    }

    check[s] = 1;

    for (int i = 0; i < graph[s].size(); i++) {
        int a = graph[s][i];
        if (check[a]) continue;
        if(flag) break;
        dfs(a, count + 1);
    }

    check[s] = 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 0; i < N; i++) {
        if(check[i]) continue;
        dfs(i, 1);

        if(flag) return 0;
    }

    cout << 0;

    return 0;
}