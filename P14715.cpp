#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K;
    cin >> K;

    int n = K;
    int count = 0;
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            count++;
        }
    }

    cout << ceil(log2(count));

    return 0;
}