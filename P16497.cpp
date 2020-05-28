#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a;
vector<int> b;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int j, k;
        cin >> j >> k;
        a.push_back(j);
        b.push_back(k);
    }

    int K;
    cin >> K;

    for (int i = 1; i <= 31; i++) {
        if (find(b.begin(), b.end(), i) != b.end()) {
            K++;
        }
        if (find(a.begin(), a.end(), i) != a.end()) {
            K--;
            if (K < 0) {
                cout << "0";
                return 0;
            }
        }
    }

    cout << "1";

    return 0;
}