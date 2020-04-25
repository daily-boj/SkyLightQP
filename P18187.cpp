#include <iostream>

using namespace std;

int dp[101] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    dp[0] = 2;
    dp[1] = 4;

    int temp = 3;
    for(int i = 2; i < N; i++) {
        dp[i] = dp[i - 1] + temp;
        if((i+1) % 3 != 0) temp++;
    }

    cout << dp[N - 1];

    return 0;
}