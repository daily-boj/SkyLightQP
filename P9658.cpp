#include <iostream>

using namespace std;

int dp[1001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[1] = 1; // 상: 0, 창: 1
    dp[2] = 0;
    dp[3] = 1;
    dp[4] = 0;
    dp[5] = 0;

    int N;
    cin >> N;

    for(int i = 6; i <= N; i++) {
        if(dp[i - 1] + dp[i - 3] + dp[i - 4] == 0) {
            dp[i] = 1;
        } else {
            dp[i] = 0;
        }
    }

    cout << (dp[N] ? "CY" : "SK");

    return 0;
}