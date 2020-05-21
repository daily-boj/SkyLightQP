#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;
    cin >> N;

    int open = 0;
    int close = 0;
    int count = 0;
    int result = 0;

    for (int i = 0; i < N.length(); i++) {
        if(N[i] == '(') {
            open++;
            count++;
        }
        else {
            close++;
            count--;
        }

        if(count == 1) {
            open = 0;
        }
        if(count < 0) {
            result = close;
            break;
        }
    }

    if(count > 0) result = open;

    cout << result;

    return 0;
}