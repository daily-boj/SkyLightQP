#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;
    cin >> N;

    int sum = 0;
    int flag = 0;
    for(int i = 0; i < N.length(); i++) {
        if(N[i] == '0') flag = 1;
        sum += N[i] - '0';
    }

    if(flag && sum % 3 == 0) {
        sort(N.begin(), N.end(), greater<char>());
        cout << N;
    } else {
        cout << "-1";
    }

    return 0;
}