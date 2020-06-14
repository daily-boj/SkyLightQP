#include <iostream>
#include <vector>
#include <queue>

#define INF 987654321

using namespace std;

typedef pair<int, int> pii;

vector<pii> graph[801];
int N, E;
int A, B;

int dijk(int start, int v) {
    vector<int> distance(N + 1, INF);
    priority_queue<pii> pq;

    distance[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int cost = -pq.top().first;
        int here = pq.top().second;
        pq.pop();

        if (distance[here] < cost) continue;

        for (int i = 0; i < graph[here].size(); i++) {
            int next = graph[here][i].first;
            int next_cost = cost + graph[here][i].second;

            if (distance[next] > next_cost) {
                distance[next] = next_cost;
                pq.push({-next_cost, next});
            }
        }
    }

    return distance[v];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> E;

    for (int i = 0; i < E; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].emplace_back(b, c);
        graph[b].emplace_back(a, c);
    }

    cin >> A >> B;

    int a = dijk(1, A) + dijk(A, B) + dijk(B, N);
    int b = dijk(1, B) + dijk(B, A) + dijk(A, N);

    if (a >= INF || b >= INF || a < 0 || b < 0) cout << "-1";
    else cout << min(a, b);

    return 0;
}