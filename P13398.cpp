#include <iostream>

using namespace std;

int dp_no[100001] = {};
int dp_remove[100001] = {};
int arr[100001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int result = arr[0];

    dp_no[0] = dp_remove[0] = arr[0];
    for(int i = 1; i < N; i++) {
        dp_no[i] = max(dp_no[i - 1] + arr[i], arr[i]);
        dp_remove[i] = max(dp_no[i - 1], dp_remove[i - 1] + arr[i]);
        result = max(result, max(dp_no[i], dp_remove[i]));
    }

    cout << result;

    return 0;
}