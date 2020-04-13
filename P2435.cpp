#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;

    int arr[101] = {};
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int result = -999;

    for(int i = 0; i <= N - K; i++) {
        int sum = 0;
        for(int j = 0; j < K; j++) {
            sum += arr[i + j];
        }
        result = max(result, sum);
    }

    cout << result;

    return 0;
}