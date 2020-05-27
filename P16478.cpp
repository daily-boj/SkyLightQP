#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout.precision(6);

    double p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    cout << fixed << (p1*p3) / p2;

    return 0;
}