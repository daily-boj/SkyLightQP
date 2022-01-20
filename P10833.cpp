#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int res = 0;
    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;

        int tmp = ceil(b / a);
        res += b - (a * tmp);
    }

    cout << res;

    return 0;
}