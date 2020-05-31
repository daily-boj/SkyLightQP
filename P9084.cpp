#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        int coin[21] = {};
        int dp[10001] = {};

        for(int i = 1; i <= N; i++) {
            cin >> coin[i];
        }

        int M;
        cin >> M;

        dp[0] = 1;

        for(int i = 1; i <= N; i++) {
            for(int j = coin[i]; j <= M; j++) {
                dp[j] += dp[j - coin[i]];
            }
        }

        cout << dp[M] << "\n";
    }

    return 0;
}