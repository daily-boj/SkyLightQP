#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    string res;
    while (n != 0) {
        if (n % -2 == 0) {
            n /= -2;
            res.push_back('0');
        } else {
            n = (n - 1) / -2;
            res.push_back('1');
        }
    }

    reverse(res.begin(), res.end());

    cout << res;

    return 0;
}