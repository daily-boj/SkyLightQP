#include <iostream>

using namespace std;

int value[1025][1025] = {};
int dp[1025][1025] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= M; j++) {
            cin >> value[i][j];
            dp[i][j] = (dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1]) + value[i][j];
        }
    }

    int K;
    cin >> K;

    while(K--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        cout << dp[x2][y2] - (dp[x1 - 1][y2] + dp[x2][y1 - 1] - dp[x1 - 1][y1 - 1]) << "\n";
    }

    return 0;

}