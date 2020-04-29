#include <iostream>

using namespace std;

int candy[302][302] = {};
int dp[302][302] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        candy[a][b] = 1;
    }

    for (int i = 0; i < 301; i++) {
        for (int j = 0; j < 301; j++) {
            if (i == 0 && j == 0) continue;

            if (i == 0) {
                if (candy[i][j]) dp[i][j] = dp[i][j - 1] + (M - i - j);
                else dp[i][j] = dp[i][j - 1];
            } else if (j == 0) {
                if (candy[i][j]) dp[i][j] = dp[i - 1][j] + (M - i - j);
                else dp[i][j] = dp[i - 1][j];
            } else {
                if (candy[i][j]) dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + (M - i - j);
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << dp[300][300];

    return 0;
}