#include <iostream>

using namespace std;

int money[100002] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    int low = 0, high = 0;
    for (int i = 0; i < N; i++) {
        cin >> money[i];
        low = max(low, money[i]);
        high += money[i];
    }

    int K;
    while (low <= high) {
        K = (low + high) / 2;

        int tried = 1; // 처음에 돈 인출함
        int used = 0; // 지금까지 쓴 돈
        for (int i = 0; i < N; i++) {
            if (K >= (used + money[i])) {
                used += money[i];
            } else {
                used = money[i];
                tried++;
            }
        }

        if (tried > M) {
            low = K + 1;
        } else {
            high = K - 1;
        }
    }

    cout << K;

    return 0;
}