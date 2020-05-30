#include <iostream>
#include <algorithm>

using namespace std;

int price[100001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> price[i];
    }

    sort(price, price + N);

    int result = 0;

    int phase = 0;
    for(int i = N - 1; i >= 0; i--) {
        if(phase >= 2) {
            phase = 0;
            continue;
        }

        result += price[i];
        phase++;
    }

    cout << result;

    return 0;
}