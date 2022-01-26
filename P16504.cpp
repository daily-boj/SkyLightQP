#include <iostream>

using namespace std;

typedef long long int lli;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli N; cin >> N;

    lli sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            lli a; cin >> a;
            sum += a;
        }
    }

    cout << sum;

    return 0;
}