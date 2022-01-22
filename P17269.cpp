#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int DATA[26] = {3, 2, 1, 2, 4, 3, 1, 3, 1, 1, 3, 1, 3, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1};
vector<int> vec;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; cin >> N >> M;
    string A, B; cin >> A >> B;

    int i;
    int len_min = min(N, M);
    int len_max = max(N, M);
    for (i = 0; i < len_min; i++) {
        vec.push_back(DATA[A[i] - 'A']);
        vec.push_back(DATA[B[i] - 'A']);
    }
    for (int j = i; j < len_max; j++) {
        if (N > M) {
            vec.push_back(DATA[A[j] - 'A']);
        } else {
            vec.push_back(DATA[B[j] - 'A']);
        }
    }

    while(true) {
        if (vec.size() == 2) {
            cout << 10 * vec[0] + vec[1] << "%";
            break;
        }

        vector<int> tmp;
        for (int j = 0; j < vec.size() - 1; ++j) {
            tmp.push_back((vec[j] + vec[j + 1]) % 10);
        }
        vec = tmp;
        tmp.clear();
    }

    return 0;
}