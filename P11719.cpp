#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    while(!cin.eof()) {
        getline(cin, s);
        cout << s << "\n";
    }

    return 0;
}