#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;

vector<pii> arr;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        arr.emplace_back(a, b);
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < N; i++) {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }

    return 0;
}