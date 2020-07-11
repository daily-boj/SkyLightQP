#include <iostream>

using namespace std;

int dpA[31] = {};
int dpB[31] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B;
    cin >> A >> B;

    dpA[1] = 1;
    dpB[2] = 1;
    for (int i = 3; i <= 30; i++) {
        dpA[i] = dpA[i - 1] + dpA[i - 2];
        dpB[i] = dpB[i - 1] + dpB[i - 2];
    }

    for (int i = 1; i <= B; i++) {
        for (int j = 1; j <= B; j++) {
            if (dpA[A] * i + dpB[A] * j == B) {
                cout << i << "\n" << j;
                return 0;
            }

            if (dpA[A] * i + dpB[A] * j > B) {
                break;
            }
        }
    }

    return 0;
}