#include <iostream>

using namespace std;

int A[101][101] = {};
int B[101][101] = {};
int result[101][101] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, K;
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    cin >> M >> K;
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < K; j++) {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < K; j++) {
            for(int k = 0; k < M; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < K; j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}