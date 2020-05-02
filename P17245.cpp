#include <iostream>

using namespace std;

typedef long long ll;

ll server[10000001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    ll sum = 0;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            int a;
            cin >> a;
            server[a]++;
            sum += a;
        }
    }

    if(N * N == server[0]) {
        cout << "0";
        return 0;
    }

    ll temp = N * N;
    ll on = 0;
    for(int i = 0; i < 10000001; i++) {
        if(((double)on / (double)sum) * 100 >= 50.0) {
            cout << i;
            break;
        }

        temp -= server[i];
        on += temp;
    }

    return 0;
}