#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int H, x;
    cin >> H >> x;

    ll result = 0;
    ll p = 1;
    for(int i = 1; i <= H; i++) {
        ll c;
        cin >> c;

        p *= x;
        p %= 1000000007;
        result += c * p;
        result %= 1000000007;
    }

    cout << result;

    return 0;
}