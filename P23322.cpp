#include <iostream>
#include <algorithm>

using namespace std;

int arr[2001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K; cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int day = 0, cnt = 0;
    int tmp = arr[0];
    for (int i = K; i < N; ++i) {
        if (arr[i] <= tmp) continue;

        int a = arr[i] - tmp;
        arr[i] -= a;
        cnt += a;
        sort(arr, arr + N);
        day++;

        if (arr[i] > tmp) i -= 1;
    }

    if (cnt == 0) {
        cout << "0 0";
    } else {
        cout << cnt << " " << day;
    }

    return 0;
}