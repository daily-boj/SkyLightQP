#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int check[8][8] = {};

int main() {
    cin.tie(NULL);
    cout.tie(NULL);

    int px = 0, py = 0;
    int nx = 0, ny = 0;
    int sx = 0, sy = 0;

    string s;
    cin >> s;

    sx = px = s[0] - 'A';
    sy = py = s[1] - '1';

    int flag = 0;

    for (int i = 1; i <= 36; i++) {
        if(i == 36) {
            nx = sx;
            ny = sy;
        } else {
            cin >> s;
            nx = s[0] - 'A';
            ny = s[1] - '1';
        }

        if (check[nx][ny]) {
            flag = 1;
            break;
        }

        if ((abs(nx - px) == 1 && abs(ny - py) == 2) || (abs(nx - px) == 2 && abs(ny - py) == 1)) {
            px = nx;
            py = ny;
            check[nx][ny] = 1;
            continue;
        }

        flag = 1;
        break;
    }

    if(flag) cout << "Invalid";
    else cout << "Valid";

    return 0;
}