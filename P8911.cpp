#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        string cmd;
        cin >> cmd;

        int x = 0, y = 0;
        int look = 3; // E 0 W 1 S 2 N 3
        int maxX = 0, minX = 0;
        int maxY = 0, minY = 0;

        for(int i = 0; i < cmd.length(); i++) {
            if(cmd[i] == 'F') {
                if(look == 3) {
                    x++;
                } else if(look == 2) {
                    x--;
                } else if(look == 1) {
                    y--;
                } else if(look == 0) {
                    y++;
                }
            } else if(cmd[i] == 'B') {
                if(look == 3) {
                    x--;
                } else if(look == 2) {
                    x++;
                } else if(look == 1) {
                    y++;
                } else if(look == 0) {
                    y--;
                }
            } else if(cmd[i] == 'L') {
                if(look == 3) {
                    look = 1;
                } else if(look == 2) {
                    look = 0;
                } else if(look == 1) {
                    look = 2;
                } else if(look == 0) {
                    look = 3;
                }
            } else if(cmd[i] == 'R') {
                if(look == 3) {
                    look = 0;
                } else if(look == 2) {
                    look = 1;
                } else if(look == 1) {
                    look = 3;
                } else if(look == 0) {
                    look = 2;
                }
            }

            minX = min(minX, x);
            maxX = max(maxX, x);
            minY = min(minY, y);
            maxY = max(maxY, y);
        }

        cout << (maxX - minX) * (maxY - minY) << "\n";
    }

    return 0;
}