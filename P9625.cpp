#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K;
    cin >> K;

    int dp_A[46] = {};
    int dp_B[46] = {};

    dp_A[0] = 1;
    dp_B[0] = 0;
    dp_A[1] = 0;
    dp_B[1] = 1;
    dp_A[2] = 1;
    dp_B[2] = 1;


    for(int i = 3; i <= K; i++) {
        dp_A[i] = dp_A[i - 2] + dp_A[i - 1];
        dp_B[i] = dp_B[i - 2] + dp_B[i - 1];
    }

    cout << dp_A[K] << " " << dp_B[K];

    return 0;
}