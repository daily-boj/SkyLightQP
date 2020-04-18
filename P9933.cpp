#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<string> words;

    for (int i = 0; i < N; i++) {
        string input;
        cin >> input;
        words.push_back(input);
    }

    for (int i = 0; i < words.size(); i++) {
        string str = words[i];
        reverse(str.begin(), str.end());

        for (auto word : words) {
            if (str == word) {
                cout << word.length() << " " << word[word.length() / 2];
                return 0;
            }
        }
    }

    return 0;
}