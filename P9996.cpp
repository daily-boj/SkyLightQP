#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    string pattern;
    cin >> pattern;

    string front, back;
    int check = 0;
    for (int i = 0; i < pattern.length(); i++) {
        if (!check) {
            if (pattern[i] == '*') {
                check = 1;
            } else {
                front.push_back(pattern[i]);
            }
        } else {
            back.push_back(pattern[i]);
        }
    }

    for (int i = 0; i < N; i++) {
        int flag = 0;
        string name;
        cin >> name;

        for (int j = 0; j < front.length(); j++) {
            if (name[j] != front[j]) {
                flag = 1;
                break;
            }
        }

        for (int j = back.length() - 1, k = name.length() - 1; j >= 0; j--, k--) {
            if (name[k] != back[j] || (front.length() - 1) >= k) {
                flag = 1;
                break;
            }
        }

        if (flag) cout << "NE\n";
        else cout << "DA\n";
    }

    return 0;
}