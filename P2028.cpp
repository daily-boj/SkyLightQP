#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int temp = N;
        int ten = 1;
        while (temp) {
            temp /= 10;
            ten *= 10;
        }

        if (((N * N) - N) % ten == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}