#include <iostream>

using namespace std;

int dp[1000001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 2;

    for (int i = 4; i <= N; i++) {
        if (i % 2 == 0) {
            dp[i] = (dp[i - 1] + dp[i / 2]) % 1000000000;
        } else {
            dp[i] = dp[i - 1] % 1000000000;
        }

    }

    cout << dp[N];

    return 0;
}