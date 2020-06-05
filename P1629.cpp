#include <iostream>

using namespace std;

typedef long long ll;

ll solve(ll A, ll B, ll C) {
    if(B == 0) return 1;

    ll temp = solve(A, B / 2, C);

    if(B % 2 == 0) return (temp * temp) % C;
    return (((temp * temp) % C) * A) % C;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll A, B, C;
    cin >> A >> B >> C;

    cout << solve(A, B, C);

    return 0;
}