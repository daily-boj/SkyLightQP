#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N, rev;
    cin >> N;
    rev = N;

    reverse(rev.begin(), rev.end());

    if(N == rev) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}