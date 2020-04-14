#include <iostream>

using namespace std;

int dp[1000001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    dp[0] = 1;
    dp[1] = 2;

    for(int i = 2; i < N; i++) {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;
    }

    cout << dp[N - 1];

    return 0;
}