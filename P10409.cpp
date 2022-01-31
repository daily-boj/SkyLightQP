#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, T; cin >> n >> T;
    int res = 0;
    while(n--) {
        int a; cin >> a;
        T -= a;
        if (T >= 0) res++;
    }
    cout << res;

    return 0;
}