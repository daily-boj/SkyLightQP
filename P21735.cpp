#include <iostream>

using namespace std;

int arr[101] = {};
int N, M;
int res = 0;

int solve(int time, int size, int i) {
    if (i >= N || time >= M) {
        return size;
    }

    int one = solve(time + 1, size + arr[i + 1], i + 1);
    int two = solve(time + 1, size / 2 + arr[i + 2], i + 2);
    return max(one, two);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    cout << solve(0, 1, -1);

    return 0;
}