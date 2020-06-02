#include <iostream>

using namespace std;

int dp[3][1001][32] = {};
int arr[1001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, W;
    cin >> T >> W;

    for(int i = 1; i <= T; i++) {
        cin >> arr[i];
    }

    for(int i = 1; i <= T; i++) {
        for(int j = 1; j <= W + 1; j++) {
            if(i == 1 && j == 1 && arr[i] == 2) continue;
            if(arr[i] == 1) {
                dp[1][i][j] = max(dp[1][i - 1][j] + 1, dp[2][i - 1][j - 1] + 1);
                dp[2][i][j] = max(dp[1][i - 1][j - 1], dp[2][i - 1][j]);
            } else {
                dp[1][i][j] = max(dp[1][i - 1][j], dp[2][i - 1][j - 1]);
                dp[2][i][j] = max(dp[2][i - 1][j] + 1, dp[1][i - 1][j - 1] + 1);
            }
        }
    }

    int result = 0;
    for(int i = 1; i <= W + 1; i++) {
        result = max(result, max(dp[1][T][i], dp[2][T][i]));
    }

    cout << result;

    return 0;
}