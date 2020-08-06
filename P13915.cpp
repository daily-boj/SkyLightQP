#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    while (cin >> N) {
        unordered_set<string> list;

        for (int i = 0; i < N; i++) {
            string str;
            cin >> str;
            sort(str.begin(), str.end());
            str.erase(unique(str.begin(), str.end()), str.end());
            list.insert(str);
        }

        cout << list.size() << "\n";
    }

    return 0;
}