#include <iostream>

#define JUGI 1500000

using namespace std;

typedef long long ll;

ll dp[JUGI] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N;
    cin >> N;

    dp[0] = 0;
    dp[1] = 1;

    for(ll i = 2; i < JUGI; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000;
    }

    cout << dp[N % JUGI];

    return 0;
}