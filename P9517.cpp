#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K, N; cin >> K >> N;
    int time = 0;
    int now = K;
    while(N--) {
        int T; string Z; cin >> T >> Z;

        time += T;
        if(time >= 210) {
            cout << now;
            break;
        }
        if (Z == "T") {
            if (++now == 9) {
                now = 1;
            }
        }
    }

    return 0;
}