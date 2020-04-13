#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        int r, c;
        cin >> r >> c;

        char str[500][500] = {};
        int result = 0;

        for(int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> str[i][j];
            }
        }

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(str[i][j] == '>' && str[i][j + 1] == 'o' && str[i][j + 2] == '<') {
                    result++;
                }
                if(str[i][j] == 'v' && str[i + 1][j] == 'o' && str[i + 2][j] == '^') {
                    result++;
                }
            }
        }

        cout << result << "\n";
    }

    return 0;
}