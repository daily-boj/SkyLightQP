#include <iostream>
#include <cmath>

#define MAX 2097153

using namespace std;

int tree[MAX] = {};
int res = 0;

int solve(int i, int size) {
    if (i * 2 > size) {
        return tree[i];
    }

    int left = solve(i * 2, size);
    int right = solve(i * 2 + 1, size);

    if (left > right) {
        tree[i * 2 + 1] += left - right;
    } else {
        tree[i * 2] += right - left;
    }

    return tree[i] + max(left, right);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k; cin >> k;
    int size = pow(2, k+1);
    for (int i = 2; i < size; ++i) {
        cin >> tree[i];
    }

    solve(1, size);

    for (int i = 2; i <= size; ++i) {
        res += tree[i];
    }
    cout << res;

    return 0;
}