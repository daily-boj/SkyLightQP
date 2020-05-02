#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, V;
    cin >> A >> B >> V;

    if(A >= V) cout << 1;
    else cout << (int)ceil((double)(V - A) / (double)(A - B)) + 1;

    return 0;
}