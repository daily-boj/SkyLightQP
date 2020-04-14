#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[1001] = {};

    int n, q;
    cin >> n >> q;

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < q; i++) {
        int type;
        cin >> type;

        if(type == 1) {
            ll a, b, sum = 0;
            cin >> a >> b;

            for(int i = a; i <= b; i++) {
                sum += arr[i];
            }

            cout << sum << "\n";
            swap(arr[a], arr[b]);
        } else if(type == 2) {
            ll a, b, c, d, sum = 0, sum2 = 0;
            cin >> a >> b >> c >> d;

            for(int i = a; i <= b; i++) {
                sum += arr[i];
            }

            for(int i = c; i <= d; i++) {
                sum2 += arr[i];
            }

            cout << sum - sum2 << "\n";
        }
    }

    return 0;
}