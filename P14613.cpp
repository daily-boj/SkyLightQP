#include <iostream>
#include <cmath>

using namespace std;

double dp[21][3500] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed;
    cout.precision(8);

    double W, L, D; cin >> W >> L >> D;

    double a = 0, b = 0, c = 0, d = 0, e = 0;
    dp[0][2000] = 1.0;

    for (int i = 1; i <= 20; ++i) {
        for (int j = 1000; j <= 3449; ++j) {
            if(dp[i - 1][j] == 0) continue;

            dp[i][j + 50] += dp[i - 1][j] * W;
            dp[i][j - 50] += dp[i - 1][j] * L;
            dp[i][j] += dp[i - 1][j] * D;
        }
    }

    for (int i = 1000; i <= 3499; ++i) {
        if (i >= 1000 && i <= 1499) a += dp[20][i];
        if (i >= 1500 && i <= 1999) b += dp[20][i];
        if (i >= 2000 && i <= 2499) c += dp[20][i];
        if (i >= 2500 && i <= 2999) d += dp[20][i];
        if (i >= 3000 && i <= 3499) e += dp[20][i];
    }

    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e;

    return 0;
}