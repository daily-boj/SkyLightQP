#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, K;
    cin >> N >> M >> K;

    int result = 0;
    while(N >= 2 && M >= 1 && (N + M) - K >= 3) {
        N -= 2;
        M -= 1;
        result++;
    }

    cout << result;

    return 0;
}