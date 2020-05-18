#include <iostream>
#include <vector>
#include <queue>

#define INF 987654321

using namespace std;

typedef pair<int, int> pii;

int N, M, START, END;
vector<pii> graph[100001];

vector<int> dijk() {
    vector<int> dis(N, INF);
    priority_queue<pii> pq;

    dis[START] = 0;
    pq.push({0, START});

    while (!pq.empty()) {
        int cost = -pq.top().first;
        int here = pq.top().second;
        pq.pop();

        if (dis[here] < cost) continue;

        for (int i = 0; i < graph[here].size(); i++) {
            int ncost = cost + graph[here][i].second;
            int n = graph[here][i].first;

            if (dis[n] < ncost) continue;

            dis[n] = ncost;
            pq.push({-ncost, n});
        }
    }

    return dis;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].emplace_back( b, c );
    }

    N++;

    cin >> START >> END;

    cout << dijk()[END];

    return 0;
}