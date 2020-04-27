#include <iostream>
#include <string>

using namespace std;

int convert(char c) {
    switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    while(N--) {
        string str;
        cin >> str;

        int result = 0;

        for(int i = 0; i < str.length(); i++) {
            int v = convert(str[i]);
            int next = convert(str[i + 1]);
            if(i != str.length() - 1 && v < next) {
                result -= v;
            } else {
                result += v;
            }
        }

        cout << result << "\n";
    }

    return 0;
}