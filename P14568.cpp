#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int res = 0;
    for (int i = 1; i <= 100; ++i) {
        for (int j = i + 2; j <= 100 - i; ++j) {
            for (int k = 2; k <= 100 - i - j; k += 2) {
                if (i + j + k == N) res++;
            }
        }
    }

    cout << res;

    return 0;
}