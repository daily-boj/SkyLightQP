#include <iostream>

using namespace std;

int arr[11][11] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K; cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int k = 0; k < K; ++k) {
            for (int j = 0; j < N; ++j) {
                for (int k = 0; k < K; ++k) {
                    cout << arr[i][j] << " ";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}