#include <iostream>

#define MOD 1000

using namespace std;

int dp[1000001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, d, N;
    cin >> a >> b >> d >> N;

    dp[0] = 1;

    for(int i = 1; i <= N; i++) {
        if(i < a) {
            dp[i] = dp[i - 1];
        } else if(i < b) {
            dp[i] = dp[i - 1] + dp[i - a];
        } else {
            dp[i] = (dp[i - 1] + dp[i - a] - dp[i - b]) + 1000;
        }
        dp[i] %= MOD;
    }

    if(N - d < 0) cout << dp[N] % MOD;
    else cout << (dp[N] - dp[N - d] + 1000) % MOD;

    return 0;
}