#include <iostream>

using namespace std;

typedef long long ll;

ll dp[101] = {};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[0] = dp[1] = dp[2] = 1;

    int T;
    cin >> T;

    for(int i = 3; i < 100; i++) {
        dp[i] = dp[i - 2] + dp[i - 3];
    }

    while(T--) {
        int N;
        cin >> N;
        cout << dp[N - 1] << "\n";
    }

    return 0;
}
