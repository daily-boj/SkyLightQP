#include <iostream>

using namespace std;

int arr[100001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, Q;
    cin >> N >> Q;

    for (int i = 0; i < Q; i++) {
        int L, I;
        cin >> L >> I;

        for (int j = L; j <= N; j += I) {
            arr[j] = 1;
        }
    }

    int result = 0;
    for (int i = 1; i <= N; i++) {
        if (arr[i] == 0) result++;
    }

    cout << result;

    return 0;
}