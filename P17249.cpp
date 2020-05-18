#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    int left = 0, right = 0;
    int flag = 0;

    for(int i = 0; i < s.length(); i++) {
        if(!flag && s[i] == '@') {
            left++;
        }
        else if(s[i] == '(') flag = 1;
        else if(flag && s[i] == '@') {
            right++;
        }
    }

    cout << left << " " << right;

    return 0;
}