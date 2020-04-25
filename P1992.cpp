#include <iostream>
#include <cstdio>

using namespace std;

int graph[65][65] = {};

void solve(int size, int x, int y) {

    int check = 0;
    for (int nx = x; nx < (x + size); nx++) {
        for (int ny = y; ny < (y + size); ny++) {
            if (graph[ny][nx] != graph[y][x]) {
                check = 1;
            }
        }
    }

    if (!check) {
        cout << graph[y][x];
        return;
    }

    int next_size = size / 2;
    int next_x = x + next_size;
    int next_y = y + next_size;

    cout << "(";
    solve(next_size, x, y);
    solve(next_size, x, next_y);
    solve(next_size, next_x, y);
    solve(next_size, next_x, next_y);
    cout << ")";
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%1d", &graph[j][i]);
        }
    }

    if(N == 1) cout << graph[0][0];
    else solve(N, 0, 0);

    return 0;
}