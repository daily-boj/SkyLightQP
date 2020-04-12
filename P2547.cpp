#include <iostream>

using namespace std;

typedef unsigned long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        ll sum = 0;
        for(int i = 0; i < N; i++) {
            ll n;
            cin >> n;
            sum += n;
            sum %= N; // 사탕 수를 세는 동시에 배분 해주자
        }

        if(sum % N == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}