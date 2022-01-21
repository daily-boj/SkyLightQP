#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string origin, search;
    getline(cin, origin);
    getline(cin, search);

    int res = 0;
    for (int i = 0; i < origin.size(); ++i) {
        bool flag = true;
        for (int j = 0; j < search.size(); ++j) {
            if (origin[i + j] != search[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            res++;
            i += search.size() - 1;
        }
    }

    cout << res;

    return 0;
}