#include <iostream>
#include <vector>
#include <queue>

#define INF 987654321

using namespace std;

typedef pair<int, int> pii;

vector<pii> graph[5001];

void solve(int s, int t) {
    vector<int> distance(5001, INF);
    priority_queue<pii> pq;

    distance[s] = 0;
    pq.push({0, s });

    while(!pq.empty()) {
        int cost = -pq.top().first;
        int here = pq.top().second;
        pq.pop();

        if(distance[here] < cost) continue;

        if (here == t) {
            cout << cost;
            return;
        }

        for(int i = 0; i < graph[here].size(); i++) {
            int next = graph[here][i].first;
            int next_cost = cost + graph[here][i].second;

            if(distance[next] > next_cost) {
                distance[next] = next_cost;
                pq.push({ -next_cost, next });
            }
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m; cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int a, b, c; cin >> a >> b >> c;
        graph[a].push_back({ b, c });
        graph[b].push_back({ a, c });
    }

    int s, t; cin >> s >> t;
    solve(s, t);

    return 0;
}