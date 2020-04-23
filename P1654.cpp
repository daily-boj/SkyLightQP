#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K, N;
    cin >> K >> N;

    ll arr[10001] = {};
    ll low = 1, high = 0;

    for (int i = 0; i < K; i++) {
        cin >> arr[i];
        high = max(high, arr[i]);
    }

    ll result = 0;
    while (low <= high) {
        ll mid = (low + high) / 2;

        ll temp = 0;
        for (int i = 0; i < K; i++) {
            temp += arr[i] / mid;
        }

        if (temp >= N) {
            low = mid + 1;
            result = max(result, mid);
        } else {
            high = mid - 1;
        }
    }

    cout << result;

    return 0;
}