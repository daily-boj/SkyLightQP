#include <iostream>

using namespace std;

double cube[2][2] = {};
double temp[2][2] = {};

void rotate() {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            temp[i][j] = cube[2-j-1][i];
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cube[i][j] = temp[i][j];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            double a; cin >> a;
            cube[i][j] = a;
        }
    }

    int cnt = 0, res = 0;
    double m = 0;

    for (int i = 0; i < 4; ++i) {
        double sum = cube[0][0] / cube[1][0] + cube[0][1] / cube[1][1];
        if (sum > m) {
            m = sum;
            res = cnt;
        }
        rotate();
        cnt++;
    }

    cout << res;

    return 0;
}