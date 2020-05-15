#include <iostream>
#include <cmath>

using namespace std;

int graph[16] = {};
int N;
int result = 0;

void solve(int start) {
    for (int i = 0; i < start; i++) {
        if (graph[start] == graph[i] || abs(graph[start] - graph[i]) == abs(start - i))
            return;
    }

    for (int i = 0; i < N; i++) {
        graph[start + 1] = i;
        solve(start + 1);
    }

    if (start + 1 == N) result++;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        graph[0] = i;
        solve(0);
    }

    cout << result;

    return 0;
}