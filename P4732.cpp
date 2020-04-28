#include <iostream>
#include <string>

using namespace std;

string music[12] = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};

int get_index(string s) {
    if (s == "Bb") {
        return 1;
    }
    if (s == "B#") {
        return 3;
    }
    if (s == "Fb") {
        return 7;
    }
    for (int i = 0; i < 12; i++) {
        if (music[i] == s) {
            return i;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1) {
        string str[4];
        int n;
        cin >> str[0];

        if (str[0] == "***") break;

        cin >> str[1] >> str[2] >> str[3] >> n;

        for (int i = 0; i < 4; i++) {
            if (str[i] == "G#" && n == 1) cout << "A ";
            else if (str[i] == "A" && n == -1) cout << "G# ";
            else if (str[i] == "Db" && n == 1) cout << "D ";
            else if (str[i] == "E#" && n == -1) cout << "E ";
            else {
                int idx = get_index(str[i]);
                cout << music[idx + n] << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}