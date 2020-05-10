#include <iostream>

using namespace std;

int dp[1002] = {};
int jump[1002] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> jump[i];
    }

    dp[0] = 0;
    dp[1] = 1;
    for (int i = 1; i <= N; i++) {
        if(dp[i] == 0) continue;
        for (int j = 1; j <= jump[i]; j++) {
            if(i+j > 1000) break;
            if (dp[i + j] > dp[i] + 1 || dp[i + j] == 0) {
                dp[i + j] = dp[i] + 1;
            }
        }
    }

    if(dp[N] == 0) cout << "-1";
    else cout << dp[N]-1;

    return 0;
}