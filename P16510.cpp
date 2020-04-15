#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    int sum[200001] = {};
    cin >> sum[0];
    for(int i = 1; i < N; i++) {
        cin >> sum[i];
        sum[i] += sum[i - 1];
    }

    for(int i = 0; i < M; i++) {
        int time;
        cin >> time;

        int result = upper_bound(sum, sum + N, time) - sum;
        cout << result << "\n";
    }

    return 0;
}