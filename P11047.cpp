#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;

    int money[11] = {};
    int result = 0;

    for(int i = 1; i <= N; i++) {
        cin >> money[i];
    }

    for(int i = N; i >= 1; i--) {
        result += K / money[i];
        K = K % money[i];
    }

    cout << result;

    return 0;
}