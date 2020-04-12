#include <iostream>

using namespace std;

int dp[1000][3] = {};
int money[1000][3] = {};
// 0 : Red
// 1 : Green
// 2 : Blue

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> money[i][0] >> money[i][1] >> money[i][2];
    }

    dp[0][0] = money[0][0];
    dp[0][1] = money[0][1];
    dp[0][2] = money[0][2];

    for(int i = 1; i < N; i++) {
        dp[i][0] = money[i][0] + min(dp[i - 1][2], dp[i - 1][1]); // 레드 쓰고 블루 그린
        dp[i][1] = money[i][1] + min(dp[i - 1][0], dp[i - 1][2]); // 그린 쓰고 레드 블루
        dp[i][2] = money[i][2] + min(dp[i - 1][0], dp[i - 1][1]); // 블루 쓰고 레드 그린
    }
    
    cout << min(dp[N-1][0], min(dp[N-1][1], dp[N-1][2]));

    return 0;
}