#include <iostream>

using namespace std;

int dp[1001][1001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    cin >> a >> b;

    for(int i = 1; i <= b.length(); i++) {
        for(int j = 1; j <= a.length(); j++) {
            if(b[i-1] == a[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                continue;
            }
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout << dp[b.length()][a.length()];

    return 0;
}