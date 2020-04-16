#include <iostream>

using namespace std;

int solve(int a, int b, int count) {
    if(b % a == 0) {
        return solve(a, b / a, count + 1);
    } else {
        return count;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    while(1) {
        int N;
        cin >> N;

        if(N == 0) break;

        int result2 = 0;
        int result5 = 0;
        for(int i = 1; i <= N; i++) {
            result2 += solve(2, i, 0);
            result5 += solve(5, i, 0);
        }

        cout << "Case #" << T << ": " << min(result2, result5)  << "\n";

        T++;
    }

    return 0;
}