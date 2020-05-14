#include <iostream>
#include <cmath>

using namespace std;

int arr[1001][1001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    int students = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];

            if (arr[i][j] == 5) {
                x1 = i;
                y1 = j;
            }
            if (arr[i][j] == 2) {
                x2 = i;
                y2 = j;
            }
        }
    }

    for (int i = min(x1, x2); i <= max(x1, x2); i++) {
        for (int j = min(y1, y2); j <= max(y1, y2); j++) {
            if (arr[i][j] == 1) students++;
            if (students >= 3 && sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) >= 5) {
                cout << "1";
                return 0;
            }
        }
    }

    cout << "0";

    return 0;
}