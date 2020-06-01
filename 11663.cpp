#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> dot;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        dot.push_back(a);
    }

    sort(dot.begin(), dot.end());

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;

        cout << upper_bound(dot.begin(), dot.end(), b) - lower_bound(dot.begin(), dot.end(), a) << "\n";
    }

    return 0;
}