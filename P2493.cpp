#include <iostream>
#include <vector>
#include <stack>

using namespace std;

typedef pair<int, int> pii;

vector<int> tower;
stack<pii> s; // index, height

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        tower.push_back(a);
    }

    for (int i = 0; i < N; i++) {
        while (!s.empty()) {
            if (tower[i] < s.top().second) break;
            s.pop();
        }

        if (s.empty()) {
            cout << "0 ";
        } else {
            cout << s.top().first << " ";
        }

        s.push({i + 1, tower[i]});
    }

    return 0;
}