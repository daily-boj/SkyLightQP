#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<int> cacheX;
unordered_set<int> cacheY;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int X, Y, P1, P2;
    cin >> X >> Y >> P1 >> P2;

    cacheX.insert(P1);
    cacheY.insert(P2);

    for(int i = 0; i < 100; i++) {
        P1 += X;
        P2 += Y;
        if(cacheY.find(P1) != cacheY.end() || cacheX.find(P2) != cacheX.end()) {
            cout << min(P1, P2);
            return 0;
        }
        cacheX.insert(P1);
        cacheY.insert(P2);
    }

    cout << "-1";

    return 0;
}