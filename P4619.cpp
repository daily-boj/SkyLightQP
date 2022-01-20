#include <iostream>
#include <cmath>

using namespace std;

int main() {
    while (true) {
        int b, n;
        cin >> b >> n;

        if (b == 0 && n == 0) break;
        if (b == 1 && n == 1) {
            cout << 1 << "\n";
            continue;
        }

        int a = 1;
        while (true) {
            if (pow(a, n) >= b) {
                if (abs(b - pow(a, n)) < abs(b - pow(a-1, n))) {
                    cout << a << "\n";
                } else {
                    cout << a - 1 << "\n";
                }
                break;
            }
            a++;
        }
    }

    return 0;
}