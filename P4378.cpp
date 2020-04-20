#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, char> key;

void init() {
    char zero[13] = {'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '='};
    char first[13] = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\'};
    char second[11] = {'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\''};
    char third[10] = {'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'};

    for (int i = 0; i < 12; i++) key.insert({zero[i + 1], zero[i]});
    for (int i = 0; i < 12; i++) key.insert({first[i + 1], first[i]});
    for (int i = 0; i < 10; i++) key.insert({second[i + 1], second[i]});
    for (int i = 0; i < 9; i++) key.insert({third[i + 1], third[i]});

    key.insert({' ', ' '});
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    init();

    string input;
    while (getline(cin, input)) {
        for (int i = 0; i < input.length(); i++) {
            cout << key.find(input[i])->second;
        }
        cout << "\n";
    }

    return 0;
}