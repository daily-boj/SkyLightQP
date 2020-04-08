#include <iostream>
#include <cstdio>
#include <string>
#include <stack>

using namespace std;

double value[26] = {};

int main() {
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string exp;
    cin >> N >> exp;

    for (int i = 0; i < N; i++) {
        cin >> value[i];
    }

    stack<double> stack;

    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] != '*' && exp[i] != '+' && exp[i] != '/' && exp[i] != '-') {
            stack.push(value[exp[i] - 'A']);
            continue;
        }

        double one = stack.top();
        stack.pop();
        double two = stack.top();
        stack.pop();

        if (exp[i] == '*') {
            stack.push(one * two);
            continue;
        }

        if (exp[i] == '+') {
            stack.push(one + two);
            continue;
        }

        if (exp[i] == '/') {
            stack.push(two / one);
            continue;
        }

        if (exp[i] == '-') {
            stack.push(two - one);
            continue;
        }
    }

    printf("%.2lf", stack.top());

    return 0;
}
