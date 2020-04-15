#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    string str[11];

    for(int i = 0; i < N; i++) {
        string in;
        cin >> in;

        for(int j = 0; j < M; j++) {
            str[i].push_back(in[j]);
            str[i].push_back(in[j]);
        }
    }

    for(int i = 0; i < N; i++) {
        string ans;
        cin >> ans;

        if(str[i] != ans) {
            cout << "Not Eyfa";
            return 0;
        }
    }

    cout << "Eyfa";

    return 0;
}