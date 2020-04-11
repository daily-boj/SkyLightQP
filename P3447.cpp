#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    while(getline(cin, input)) {
        if(input == "") {
            cout << "\n";
            continue;
        }

        while(input.find("BUG") != -1) {
            int start = 0;
            for(int i = 0; i < input.length(); i++) {
                if(input[i] == 'B' && input[i + 1] == 'U' && input[i + 2] == 'G') {
                    start = i;
                    break;
                }
            }

            input.replace(start, 3, "");
        }

        cout << input << "\n";
    }

    return 0;
}