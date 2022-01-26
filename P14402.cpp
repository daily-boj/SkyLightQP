#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> m;

bool exists(string name) {
    return m.find(name) != m.end();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int q; cin >> q;
    int res = 0;
    while (q--) {
        string name, type; cin >> name >> type;
        if (type == "+") {
            if (exists(name)) m[name]++;
        } else {
            if (m[name] == 0) res++;
            else m[name]--;
        }
    }

    for (pair<string, int> iter: m) {
        res += iter.second;
    }
    cout << res;

    return 0;
}