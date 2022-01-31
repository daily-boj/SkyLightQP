#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int s = 0, m = 101;
        for (int i = 0; i < 7; ++i) {
            int a; cin >> a;
            if (a % 2 == 0) {
                s += a;
                m = min(m, a);
            }
        }
        cout << s << " " << m << "\n";
    }

    return 0;
}