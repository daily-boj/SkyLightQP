#include <iostream>

#define MAX 1000001

typedef long long ll;
using namespace std;

int prime[MAX] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 2; i < MAX; ++i) {
        if (prime[i]) continue;
        for(int j = 2 * i; j <= MAX; j += i) {
            prime[j] = 1;
        }
    }

    int T; cin >> T;
    while (T--) {
        int flag = 0;
        ll a; cin >> a;
        for (int i = 2; i < MAX; ++i) {
            if (flag == 0 && a % i == 0) {
                cout << "NO\n";
                flag = 1;
            }
        }
        if (flag == 0) cout << "YES\n";
    }

    return 0;
}