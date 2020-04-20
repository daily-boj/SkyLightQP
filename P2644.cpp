#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> graph[101] = {};
int check[101] = {};

void bfs(int start) {
    queue<int> q;

    q.push(start);
    check[start] = 1;

    while(!q.empty()) {
        int front = q.front();
        q.pop();

        for(int i = 0; i < graph[front].size(); i++) {
            int node = graph[front][i];
            if(check[node] != 0) continue;

            check[node] += check[front] + 1;
            q.push(node);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, y, m;
    cin >> n >> x >> y >> m;

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs(x);

    if(check[y] == 0) cout << "-1";
    else cout << check[y] - 1;

    return 0;
}