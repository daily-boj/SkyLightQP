#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int result = 0;
    for(int i = 1; i < N; i++) {
        for(int j = i; i < N; j++) {
            int k = N - (i + j);
            if(j > k) break;
            if(k < (i + j)) result++;
        }
    }

    cout << result;

    return 0;
}