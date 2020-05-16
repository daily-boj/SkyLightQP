#include <iostream>
#include <string>

using namespace std;

int dp[5001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;
    cin >> N;

    if(N[0] == '0') {
        cout << "0";
        return 0;
    }

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= N.length(); i++) {
        if (N[i - 1] > '0') {
            dp[i] = dp[i - 1] % 1000000;
        }

        int num = (N[i - 2] - '0') * 10 + N[i - 1] - '0';
        if (num >= 10 && num <= 26) {
            dp[i] += dp[i - 2] % 1000000;
        }
    }

    cout << dp[N.length()] % 1000000;

    return 0;
}