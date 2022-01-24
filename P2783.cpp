#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<double> vec;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double x, y; cin >> x >> y;
    vec.push_back(x / y);

    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        double a, b; cin >> a >> b;
        vec.push_back(a / b);
    }

    sort(vec.begin(), vec.end());

    cout << round(vec[0] * 1000.0 * 100) / 100;

    return 0;
}