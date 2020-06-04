#include <iostream>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b;
    cin >> a >> b;

    ll result = 0;
    for (ll i = 1; (i * i) <= b; i++) {
        if ((i * i) > a) result++;
    }

    ll g = gcd(result, b - a);
    ll up = result / g;
    ll down = (b - a) / g;

    if (up == 0 || down == 0) cout << "0";
    else cout << up << "/" << down;

    return 0;
}