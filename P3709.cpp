#include <iostream>
#include <cstring>

using namespace std;

int graph[52][52] = {};
int n, r;

void find(int sx, int sy) {
    int nx = sx, ny = sy;
    int dx = 0, dy = 0;

    if (sx == 0) {
        dx = 1;
        dy = 0;
    } else if (sx == n + 1) {
        dx = -1;
        dy = 0;
    } else if (sy == 0) {
        dx = 0;
        dy = 1;
    } else if (sy == n + 1) {
        dx = 0;
        dy = -1;
    }

    while (true) {
        nx += dx;
        ny += dy;

        if (nx < 1 || nx > n || ny < 1 || ny > n) {
            cout << ny << " " << nx << "\n";
            return;
        }

        if (!graph[ny][nx]) continue;
        if (dx == 0 && dy == 1) {
            dx = -1;
            dy = 0;
        } else if (dx == 0 && dy == -1) {
            dx = 1;
            dy = 0;
        } else if (dx == 1 && dy == 0) {
            dx = 0;
            dy = 1;
        } else if (dx == -1 && dy == 0) {
            dx = 0;
            dy = -1;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        memset(graph, 0, sizeof(graph));

        cin >> n >> r;

        for (int i = 0; i < r; i++) {
            int x, y;
            cin >> x >> y;
            graph[x][y] = 1;
        }

        int sx, sy;
        cin >> sx >> sy;

        find(sy, sx);
    }

    return 0;
}