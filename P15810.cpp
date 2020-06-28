#include <iostream>
#include <numeric>

using namespace std;

typedef long long ll;

ll balloon[1000001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N, M;
    cin >> N >> M;

    for (ll i = 0; i < N; i++) {
        cin >> balloon[i];
    }

    ll low = 1;
    ll high = 1000000000000;

    while (low < high) {
        ll mid = (low + high) / 2;
        ll sum = accumulate(balloon, balloon + N, 0LL, [=](ll a, ll b) {
            return a + (mid / b);
        });

        if(sum < M) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    cout << low;

    return 0;
}