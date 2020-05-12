#include <iostream>

using namespace std;

int arr[31][31] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    int result = 0;

    for (int i = 0; i < M; i++) {
        for (int j = i + 1; j < M; j++) {
            for (int k = j + 1; k < M; k++) {
                int sum = 0;

                for (int l = 0; l < N; l++) {
                    sum += max(arr[l][i], max(arr[l][j], arr[l][k]));
                }

                result = max(result, sum);
            }
        }
    }

    cout << result;

    return 0;
}