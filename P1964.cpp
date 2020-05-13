#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N;
    cin >> N;

    ll result = (4 * N) + N * (3 * (N - 1)) / 2 + 1;
    result %= 45678;

    cout << result;

    return 0;
}