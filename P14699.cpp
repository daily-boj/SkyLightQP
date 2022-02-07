#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[5001];
int height[5001] = {};
int dp[5001] = {};

int dfs(int n) {
    if (dp[n]) return dp[n];

    int m = 0;
    for (int i = 0; i < graph[n].size(); ++i) {
        m = max(m, dfs(graph[n][i]));
    }

    dp[n] = m + 1;
    return dp[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; cin >> N >> M;
    for (int i = 1; i <= N; ++i) {
        cin >> height[i];
    }

    for (int i = 0; i < M; ++i) {
        int a, b; cin >> a >> b;
        if (height[a] > height[b]) {
            graph[b].push_back(a);
        } else {
            graph[a].push_back(b);
        }
    }

    for (int i = 1; i <= N; ++i) {
        cout << dfs(i) << "\n";
    }

    return 0;
}