#include <iostream>

using namespace std;

int dp[31] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    dp[0] = 1;
    dp[2] = 3;

    if(N % 2 == 0) {
        for(int i = 4; i <= N; i += 2) {
            dp[i] = dp[i - 2] * 3;

            for(int j = 4; j <= i; j += 2){
                dp[i] += dp[i - j] * 2;
            }
        }
    }

    cout << dp[N];

    return 0;
}