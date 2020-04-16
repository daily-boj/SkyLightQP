#include <iostream>

using namespace std;

int kit[9] = {};
int check[9] = {};
int N, K;
int result = 0;
int three = 0;

void backtracking(int count) {
    if(count == N - 1) {
        result++;
    }

    for(int i = 0; i < N; i++) {
        if(check[i]) continue;
        if(three + kit[i] < 0) continue;

        check[i] = 1;
        three += kit[i];
        backtracking(count + 1);
        three -= kit[i];
        check[i] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;

    for(int i = 0; i < N; i++) {
        cin >> kit[i];
        kit[i] -= K;
    }

    backtracking(0);

    cout << result;

    return 0;
}