#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> graph[51];
int check[51] = {};

int root = 0;
int children = 0;
int result = 0;

void bfs(int start) {
    queue<int> q;
    q.push(start);

    check[start] = 1;

    while(!q.empty()) {
        int front = q.front();
        q.pop();

        children = 0;

        for(int i = 0; i < graph[front].size(); i++) {
            int node = graph[front][i];

            if(check[node]) continue;

            children++;
            check[node] = 1;

            q.push(node);
        }

        if(children == 0) result++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        int v;
        cin >> v;

        if(v == -1) {
            root = i;
        } else {
            graph[i].push_back(v);
            graph[v].push_back(i);
        }
    }

    int remove;
    cin >> remove;

    check[remove] = 1;

    if(remove != root) bfs(root);

    cout << result;

    return 0;
}