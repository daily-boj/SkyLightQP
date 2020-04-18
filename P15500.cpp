#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> pii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> L;
    vector<int> M;
    vector<pii> result;
    int MAX = 0;
    int T = 0;

    for (int i = 0; i < N; i++) {
        int v;
        cin >> v;
        MAX = max(MAX, v);
        L.push_back(v);
    }

    T = MAX;

    while (!L.empty() || !M.empty()) {
        if ((!L.empty()) && L[L.size() - 1] == T) {
            L.pop_back();
            T--;
            result.push_back({1, 3});
        } else if ((!L.empty()) && L[L.size() - 1] != T) {
            int top = L[L.size() - 1];
            L.pop_back();
            M.push_back(top);
            result.push_back({1, 2});
        } else if ((!M.empty()) && M[M.size() - 1] == T) {
            M.pop_back();
            T--;
            result.push_back({2, 3});
        } else if ((!M.empty()) && M[M.size() - 1] != T) {
            int top = M[M.size() - 1];
            M.pop_back();
            L.push_back(top);
            result.push_back({2, 1});
        }
    }

    cout << result.size() << "\n";
    for (const auto & i : result) {
        cout << i.first << " " << i.second << "\n";
    }

    return 0;
}