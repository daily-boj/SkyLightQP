#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int score[10];
    for (int i = 0; i < 10; ++i) {
        cin >> score[i];
    }

    int prev = 0;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        prev = sum;
        sum += score[i];

        if (sum >= 100) {
            if (sum - 100 > 100 - prev) {
                cout << prev;
            } else {
                cout << sum;
            }
            return 0;
        }
    }

    cout << sum;

    return 0;
}