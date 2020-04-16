#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char str[105][105] = {};

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }

    char new_str[105][105] = {};
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            new_str[i][j] = str[j][M - i - 1];
            switch (new_str[i][j]) {
                case '-':
                    new_str[i][j] = '|';
                    break;
                case '|':
                    new_str[i][j] = '-';
                    break;
                case '/':
                    new_str[i][j] = '\\';
                    break;
                case '\\':
                    new_str[i][j] = '/';
                    break;
                case '^':
                    new_str[i][j] = '<';
                    break;
                case '<':
                    new_str[i][j] = 'v';
                    break;
                case 'v':
                    new_str[i][j] = '>';
                    break;
                case '>':
                    new_str[i][j] = '^';
                    break;
            }
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << new_str[i][j];
        }
        cout << "\n";
    }

    return 0;
}