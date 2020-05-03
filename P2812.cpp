#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    string str;

    cin >> N >> K >> str;

    stack<char> s;
    for (int i = 0; i < N; i++) {
        while (K && !s.empty() && s.top() < str[i]) {
            s.pop();
            K--;
        }
        s.push(str[i]);
    }

    for(int i = 0; i < K; i++) {
        s.pop();
    }

    stack<char> rev;
    while(!s.empty()) {
        rev.push(s.top());
        s.pop();
    }

    while(!rev.empty()) {
        cout << rev.top();
        rev.pop();
    }

    return 0;
}