#include <iostream>

using namespace std;

char graph[10001][10001] = {};
int maxY = 0;
int maxX = 0;
int result = 0;

void find(int sx, int sy) {
    for(int i = sy; i >= 1; i--) {
        result++;
        if(graph[sy][sx] == 1 || graph[sy][sx] == 2)
            return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        int Y, X1, X2;
        cin >> Y >> X1 >> X2;
        maxY = max(maxY, Y);
        maxX = max(maxX, X2);

        for(int j = X1; j <= X2; j++) {
            graph[Y][j] = 2;
        }

        graph[Y][X1] = graph[Y][X2] = 1;
    }

    for(int i = maxY; i >= 1; i--) {
        for(int j = 1; j <= maxX; j++) {
            if(graph[i][j]) find(j, i);
        }
    }

    cout << result - 2;

    return 0;
}