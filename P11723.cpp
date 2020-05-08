#include <iostream>
#include <string>

using namespace std;

int bitmask = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M;
    cin >> M;

    while(M--) {
        string cmd;
        cin >> cmd;
        int v;
        if (cmd == "add") {
            cin >> v;
            bitmask |= 1 << (v-1);
        } else if (cmd == "remove") {
            cin >> v;
            bitmask &= ~(1 << (v-1));
        } else if (cmd == "check") {
            cin >> v;
            cout << (bitmask & (1 << (v-1)) ? 1 : 0) << "\n";
        } else if (cmd == "toggle") {
            cin >> v;
            bitmask ^= 1 << (v-1);
        } else if (cmd == "all") {
            bitmask |= (1 << 20) - 1;
        } else if (cmd == "empty") {
            bitmask = 0;
        }
    }

    return 0;
}