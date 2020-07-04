#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K, L, N;
    cin >> K >> L >> N;
    string str;
    cin >> str;

    int time = 1;
    int cnt = 0;
    bool use = false;
    bool flag = false;
    for (auto s : str) {
        if (s == '1') {
            if (!use) {
                cnt++;
                if (cnt >= K) {
                    use = true;
                    cnt = 0;
                }
            } else {
                cnt = 0;
            }
        } else {
            if (use) {
                cnt++;
                if (cnt >= L) {
                    use = false;
                    cout << time << "\n";
                    flag = true;
                    cnt = 0;
                }
            } else {
                cnt = 0;
            }
        }
        time++;
    }

    if (use) {
        cout << (N + L) - cnt << "\n";
        flag = true;
    }
    if (!flag) cout << "NIKAD";

    return 0;
}