#include <iostream>

#define MIN -987654321

using namespace std;

int sum[101] = {};
int dp[101][51] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 101; i++) {
        for (int j = 0; j < 51; j++) {
            dp[i][j] = MIN;
        }
    }

    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        int a;
        cin >> a;
        sum[i] = sum[i - 1] + a;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            dp[i][j] = dp[i - 1][j];
            for (int k = i - 1; k / 2 >= j - 1; k--) {
                dp[i][j] = max(dp[i][j], (j == 1 ? 0 : dp[k - 1][j - 1]) + sum[i] - sum[k]);
            }
        }
    }

    cout << dp[N][M];

    return 0;
}