#include <iostream>

using namespace std;

int sum[100001] = {};
int a[100001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        cin >> a[i];
    }

    sum[1] = a[1];
    for(int i = 2; i <= N; i++) {
        sum[i] = sum[i - 1] + a[i];
    }

    int M;
    cin >> M;
    for(int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;

        cout << sum[b] - sum[a-1]  << "\n";
    }
    
    return 0;
}