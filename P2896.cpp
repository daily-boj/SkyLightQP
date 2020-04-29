#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout.precision(6);

    double A, B, C;
    double I, J, K;

    cin >> A >> B >> C >> I >> J >> K;

    double ai = A / I;
    double bj = B / J;
    double ck = C / K;
    double MIN = min(ai, min(bj, ck));

    cout << fixed << abs(A-I*MIN) << " " << abs(B-J*MIN) << " " << abs(C-K*MIN);

    return 0;
}