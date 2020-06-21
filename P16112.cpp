#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll arr[300000] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll N, K;
    cin >> N >> K;

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    ll temp = 0;
    ll result = 0;
    for(int i = N - 1; i >= 0; i--) {
        if(K > i) result += temp;
        temp += arr[i];
    }

    cout << result;

    return 0;
}