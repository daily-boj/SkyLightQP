#include <iostream>

using namespace std;

long long dp[50001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i < n; i++) {
        dp[i] = dp[i - 1] + dp[i - 3] % 1000000009;
    }

    cout << dp[n - 1] % 1000000009;

    return 0;
}