#include <iostream>

using namespace std;

int get_length(int i) {
    int length = 0;
    while (i) {
        length++;
        i /= 10;
    }
    return length;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, k;
    cin >> N >> k;

    int length = 0;
    int temp = 0;
    for (int i = 1; i <= N; i++) {
        length += get_length(i);
        temp = max(temp, i);
        if (length >= k) {
            break;
        }
    }

    if (length < k) {
        cout << "-1";
        return 0;
    }

    while (length > k) {
        temp /= 10;
        length--;
    }

    cout << temp % 10;

    return 0;
}