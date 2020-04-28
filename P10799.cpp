#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;
    cin >> N;

    stack<char> s;
    int result = 0;

    for(int i = 0; i < N.length(); i++) {
        if(N[i] == '(') {
            s.push('(');
        } else if(N[i] == ')') {
            if(!s.empty()) s.pop();
            if(N[i - 1] == '(') {
                result += s.size();
            } else {
                result++;
            }
        }
    }

    cout << result;

    return 0;
}