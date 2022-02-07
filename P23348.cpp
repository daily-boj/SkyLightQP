#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C; cin >> A >> B >> C;
    int N; cin >> N;
    int res = 0;
    for (int i = 0; i < N; ++i) {
        int a1, b1, c1, a2, b2, c2, a3, b3, c3; cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> a3 >> b3 >> c3;
        res = max(res, a1 * A + b1 * B + c1 * C + a2 * A + b2 * B + c2 * C + a3 * A + b3 * B + c3 * C);
    }

    cout << res;

    return 0;
}