#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        stack<char> left;
        stack<char> right;

        string str;
        cin >> str;

        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '<') {
                if(left.empty()) continue;
                right.push(left.top());
                left.pop();
            } else if(str[i] == '>') {
                if(right.empty()) continue;
                left.push(right.top());
                right.pop();
            } else if(str[i] == '-') {
                if(left.empty()) continue;
                left.pop();
            } else {
                left.push(str[i]);
            }
        }

        while (!left.empty()) {
            right.push(left.top());
            left.pop();
        }

        while (!right.empty()) {
            cout << right.top();
            right.pop();
        }

        cout << "\n";
    }

    return 0;
}