#include <iostream>

using namespace std;

int no[201][201] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        no[a][b] = 1;
        no[b][a] = 1;
    }

    int result = 0;
    for(int i = 1; i <= N - 2; i++) {
        for(int j = i +1 ; j <= N - 1; j++) {
            if (no[i][j]) continue;
            for(int k = j + 1; k <= N; k++) {
                if(no[j][k] || no[i][k]) continue;

                result++;
            }
        }
    }

    cout << result;

    return 0;
}