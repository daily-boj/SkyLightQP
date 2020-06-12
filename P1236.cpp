#include <iostream>

using namespace std;

char arr[51][51] = {};
char width[51] = {};
char height[51] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> arr[i][j];

            if(arr[i][j] == 'X') {
                width[i] = 1;
                height[j] = 1;
            }
        }
    }

    int result1 = 0, result2 = 0;

    for(int i = 0; i < N; i++) {
        if(!width[i]) result1++;
    }

    for(int i = 0; i < M; i++) {
        if(!height[i]) result2++;
    }

    cout << max(result1, result2);

    return 0;
}