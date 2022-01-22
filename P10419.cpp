#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;

    for (int i = 0; i < T; ++i) {
        int d; cin >> d;
        int tmp = -1;
        for (int j = 0; j < 10000; ++j) {
            if (j + pow(j, 2) <= d) {
                tmp = max(tmp, j);
            }
        }
        cout << tmp << "\n";
    }


    return 0;
}