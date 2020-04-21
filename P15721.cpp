#include <iostream>

#define BBUN 0
#define DEGI 1

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, T, C;
    cin >> A >> T >> C;

    int B = 0, D = 0;
    int round = 2;
    while (round-2 < T) {
        for (int i = 0; i < 4; i++) { // 뻔 데기 뻔 데기
            if (i % 2 == 0) B++;
            else D++;

            if ((T == B && C == BBUN) || (T == D && C == DEGI)) {
                cout << (B + D - 1) % A;
                return 0;
            }
        }

        // 뻔
        for (int i = 0; i < round; i++) {
            B++;
            if (B == T && C == BBUN) {
                cout << (B + D - 1) % A;
                return 0;
            }
        }

        // 데기
        for (int i = 0; i < round; i++) {
            D++;
            if (D == T && C == DEGI) {
                cout << (B + D - 1) % A;
                return 0;
            }
        }


        round++;
    }
}