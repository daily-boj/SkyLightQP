#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b; cin >> a >> b;

    for (int i = 1; i <= min(a,b); ++i) {
        if(a % i == 0 && b % i == 0) {
            cout << i << " " << a / i << " " << b / i << "\n";
        }
    }

    return 0;
}