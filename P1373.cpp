#include <iostream>
#include <string>

using namespace std;

int ctoi(char a) {
    return a - '0';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    cin >> input;

    if (input.length() % 3 == 2) {
        input.insert(0, 1, '0');
    } else if (input.length() % 3 == 1) {
        input.insert(0, 1, '0');
        input.insert(0, 1, '0');
    }

    int i = 0;
    while (i < input.length()) {
        int value = ctoi(input[i]) * 4 + ctoi(input[i + 1]) * 2 + ctoi(input[i + 2]);
        cout << value;
        i += 3;
    }

    return 0;
}