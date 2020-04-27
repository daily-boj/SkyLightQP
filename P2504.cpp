#include <iostream>
#include <string>
#include <stack>

using namespace std;
	
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    stack<char> stack;
    int temp = 1;
    int result = 0;
    int flag = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(') {
            stack.push('(');
            temp *= 2;
        } else if(s[i] == '[') {
            stack.push('[');
            temp *= 3;
        } else if(s[i] == ')') {
            if(stack.empty() || stack.top() != '(') {
                flag = 1;
                break;
            }
            if (s[i - 1] == '(') {
                result += temp;
            }
            temp /= 2;
            stack.pop();
        } else if(s[i] == ']') {
            if(stack.empty() || stack.top() != '[') {
                flag = 1;
                break;
            }
            if (s[i - 1] == '[') {
                result += temp;
            }
            temp /= 3;
            stack.pop();
        }
    }

    if(flag || !stack.empty()) cout << "0";
    else cout << result;

	return 0;
}
