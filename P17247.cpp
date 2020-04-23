#include <iostream>
#include <cmath>

using namespace std;

typedef pair<int, int> pii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Y, X;
    pii A, B;
    int temp = 0;

    cin >> Y >> X;

    for(int i = 1; i <= Y; i++) {
        for(int j = 1; j <= X; j++) {
            int n;
            cin >> n;

            if(temp == 0 && n == 1) {
                A = { j, i };
                temp = 1;
            } else if(temp == 1 && n == 1) {
                B = { j, i };
            }
        }
    }

    cout << abs(B.first - A.first) + abs(B.second - A.second);

    return 0;
}