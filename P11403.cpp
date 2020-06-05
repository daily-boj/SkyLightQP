#include <iostream>
#include <cstring>

using namespace std;

int graph[101][101] = {};
int check[101] = {};
int result[101][101] = {};
int N;
int point;

void dfs(int start) {
    for (int i = 1; i <= N; i++) {
        int node = graph[start][i];
        if(!node) continue;
        if(check[i]) continue;

        check[i] = 1;
        result[point][i] = 1;
        dfs(i);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            int a;
            cin >> a;
            if(a) graph[i][j] = 1;
        }
    }

    for(int i = 1; i <= N; i++) {
        memset(check, 0, sizeof(check));
        point = i;
        dfs(i);
    }

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
           cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}