#include <iostream>

using namespace std;

typedef long long int lli;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli N; cin >> N;
    lli sum = N * (N - 1) / 2;
    lli tmp = 0;
    for (int i = 0; i < N; ++i) {
        lli a; cin >> a;
        tmp += a;
    }

    cout << tmp - sum;

    return 0;
}