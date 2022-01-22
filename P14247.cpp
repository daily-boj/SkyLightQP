#include <iostream>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;
pii arr[100001] = {};

bool cmp(const pii &a, const pii &b){
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].first;
    }
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].second;
    }

    sort(arr, arr + n, cmp);

    long long int res = 0;
    for (int i = 0; i < n; ++i) {
        res += arr[i].first + arr[i].second * i;
    }

    cout << res;

    return 0;
}