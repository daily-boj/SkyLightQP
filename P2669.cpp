#include <iostream>

using namespace std;

int check[101][101] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int res = 0;
    for (int T = 0; T < 4; ++T) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i < x2; ++i) {
            for (int j = y1; j < y2; ++j) {
                if (check[i][j]) continue;
                check[i][j] = 1;
                res++;
            }
        }
    }
    cout << res;

    return 0;
}