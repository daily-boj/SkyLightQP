#include <iostream>

#define INF 987654321

using namespace std;

int N;
int graph[51][51] = {};

void f() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (graph[i][j] > graph[i][k] + graph[k][j]) {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            char c;
            cin >> c;
            if (i == j) graph[i][j] = 0;
            else if (c == 'Y') graph[i][j] = 1;
            else graph[i][j] = INF;
        }
    }

    f();

    int result = 0;

    for (int i = 0; i < N; i++) {
        int ans = 0;
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            if (graph[i][j] <= 2) {
                ans++;
            }
        }
        result = max(result, ans);
    }

    cout << result;

    return 0;
}