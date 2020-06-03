#include <iostream>

using namespace std;

typedef long long ll;

ll sum[100001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    sum[0] = 0;
    for(int i = 1; i <= N; i++) {
        int a;
        cin >> a;
        sum[i] = sum[i - 1] + a;
    }

    int K;
    cin >> K;

    ll result = 0;
    for(int i = 1; i <= N; i++) {
        ll low = 0, high = i - 1;

        while(high > low) {
            ll m = (low + high) / 2;
            if(sum[m] < sum[i] - K) low = m + 1;
            else high = m;
        }

        result += high;
    }

    cout << result;

    return 0;
}