#include <iostream>

using namespace std;

int arr[51] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    if (N == 1) {
        cout << "A";
        return 0;
    }

    if (N == 2) {
        if (arr[0] == arr[1]) {
            cout << arr[0];
            return 0;
        }

        cout << "A";
        return 0;
    }

    int a = 0, b = 0;
    if (arr[0] != arr[1]) {
        a = (arr[2] - arr[1]) / (arr[1] - arr[0]);
    }

    b = arr[1] - (arr[0] * a);

    for(int i = 0; i < N - 1; i++) {
        if (arr[i] * a + b != arr[i + 1]) {
            cout << "B";
            return 0;
        }
    }

    cout << arr[N-1] * a + b;

    return 0;
}