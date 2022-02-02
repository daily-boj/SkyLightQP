#include <iostream>
#include <vector>

using namespace std;

int s[200][4] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> s[i][0] >> s[i][1] >> s[i][2];
    }

    for (int i = 0; i < N; ++i) {
        int sum = 0;
        for (int j = 0; j < 3; ++j) {
            int flag = 0;
            for (int k = 0; k < N; ++k) {
                if (i != k && s[i][j] == s[k][j]) {
                    flag = 1;
                    break;
                }
            }
            if (!flag) {
                sum += s[i][j];
            }
        }
        cout << sum << "\n";
    }

    return 0;
}