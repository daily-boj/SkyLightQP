#include <iostream>

using namespace std;

typedef long long ll;

ll arr[100001] = {};
ll dp[100001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        cin >> arr[i];
    }

    dp[1] = arr[1];
    for(int i = 2; i <= N; i++) {
        dp[i] = dp[i - 1] + arr[i];
    }

    ll result = 0;
    for(int i = 1; i <= N; i++) {
        result += arr[i] * (dp[N] - dp[i]);
    }

    cout << result;

    return 0;
}