#include <iostream>
#include <string>

typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string C;
    ll A, B; cin >> A >> B >> C;

    if ((C[C.length() - 1] - '0') % 2 == 0) cout << A;
    else cout << (A ^ B);

    return 0;
}