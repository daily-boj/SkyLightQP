#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    long long dp[81] = {};

    dp[0] = 4;
    dp[1] = 6;

    for(int i = 2; i < N; i++) {
        dp[i] = dp[i - 2] + dp[i - 1];
    }

    cout << dp[N - 1];

    return 0;
}