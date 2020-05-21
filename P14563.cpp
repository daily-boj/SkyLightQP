#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        int N;
        cin >> N;

        int sum = 0;
        for(int i = 1; i < N; i++) {
            if(N % i == 0) {
                sum += i;
            }
        }

        if(sum == N) cout << "Perfect\n";
        else if(sum > N) cout << "Abundant\n";
        else cout << "Deficient\n";
    }

    return 0;
}