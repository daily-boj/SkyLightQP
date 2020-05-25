#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    char R[500005] = {};
    cin >> N;

    int Rb = 0, Bb = 0;
    for (int i = 0; i < N; i++) {
        cin >> R[i];
        if (R[i] == 'R') Rb++;
        else Bb++;
    }

    int result = 987654321;

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (R[i] != 'R') break;
        cnt++;
    }
    result = min(result, Rb - cnt);

    cnt = 0;
    for (int i = N - 1; i >= 0; i--) {
        if (R[i] != 'R') break;
        cnt++;
    }
    result = min(result, Rb - cnt);

    cnt = 0;
    for (int i = 0; i < N; i++) {
        if (R[i] != 'B') break;
        cnt++;
    }
    result = min(result, Bb - cnt);

    cnt = 0;
    for (int i = N - 1; i >= 0; i--) {
        if (R[i] != 'B') break;
        cnt++;
    }
    result = min(result, Bb - cnt);

    cout << result;

    return 0;
}