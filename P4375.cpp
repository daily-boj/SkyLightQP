#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    while(cin >> N) {
        int i = 1;
        int length = 1;
        while(1) {
            if(i % N == 0) {
                cout << length << "\n";
                break;
            }

            i *= 10;
            i %= N;
            i++;
            length++;
        }
    }

    return 0;
}