#include <iostream>

using namespace std;

int rev(int x) {
    int y = 0;
    while(x) {
        y *= 10;
        y += x % 10;
        x /= 10;
    }
    return y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int X, Y;
    cin >> X >> Y;

    cout << rev(rev(X) + rev(Y));

    return 0;
}