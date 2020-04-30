#include <iostream>

using namespace std;

int N, M;
int arr[9] = {};
int check[9] = {};

void solve(int count) {
    if(count == M) {
        for(int i = 0; i < M; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = 0; i < N; i++) {
        if(check[i]) continue;

        check[i] = 1;
        arr[count] = i+1;
        solve(count + 1);
        check[i] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    solve(0);

    return 0;
}