#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    int i = 0;
    while(i < s.length()) {
        if(s[i] == 'p' && s[i + 1] == 'i') {
            i += 2;
            continue;
        }
        if(s[i] == 'k' && s[i + 1] == 'a') {
            i += 2;
            continue;
        }
        if(s[i] == 'c' && s[i + 1] == 'h' && s[i + 2] == 'u') {
            i += 3;
            continue;
        }

        cout << "NO";
        return 0;
    }

    cout << "YES";

    return 0;
}