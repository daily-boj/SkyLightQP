#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, R, C;
    cin >> N >> R >> C;


    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if ((R + C) % 2 == 0) {
                if ((i + j) % 2 == 0) {
                    cout << "v";
                } else {
                    cout << ".";
                }
            } else {
                if ((i + j) % 2 == 0) {
                    cout << ".";
                } else {
                    cout << "v";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}