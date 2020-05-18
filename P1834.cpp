#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N;
    cin >> N;

    ll result = 0;
    for(ll i = 0; i < N; i++) {
        result += N * i + i;
    }

    cout << result;

    return 0;
}