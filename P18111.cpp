#include <iostream>

#define REMOVE 2
#define ADD 1

using namespace std;

int map[501][501] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, B;
    cin >> N >> M >> B;

    int min_height = 987654321;
    int max_height = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> map[i][j];
            min_height = min(min_height, map[i][j]);
            max_height = max(max_height, map[i][j]);
        }
    }

    int min_time = 987654321, height = 0;
    for (int k = min_height; k <= max_height; k++) {
        int inventory = B, time = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                auto temp = map[i][j] - k;
                if (temp > 0) {
                    time += temp * REMOVE;
                    inventory += temp;
                } else if (temp < 0) {
                    time += temp * ADD * -1;
                    inventory += temp;
                }
            }
        }

        if(inventory < 0) continue;

        if(time <= min_time) {
            min_time = time;
            height = k;
        }
    }

    cout << min_time << " " << height;

    return 0;
}