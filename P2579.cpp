#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int score[301] = {};
    int dp[301] = {};

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> score[i];
    }

    dp[0] = score[0];
    dp[1] = max(score[0] + score[1], score[1]);
    dp[2] = max(score[1] + score[2], score[0] + score[2]);

    for(int i = 3; i < N; i++) {
        dp[i] = max(score[i] + dp[i - 2], score[i] + score[i - 1] + dp[i - 3]);
    }

    cout << dp[N - 1];

    return 0;
}