#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int result = 0;
    int onebytwo = 0;
    int onebyfour = 0;
    int threebyfour = 0;

    for (int i = 0; i < N; i++) {
        string in;
        cin >> in;

        if (in == "1/2") onebytwo++;
        else if (in == "1/4") onebyfour++;
        else if (in == "3/4") threebyfour++;
    }

    onebyfour -= threebyfour;
    result += threebyfour;

    if (onebytwo % 2 != 0) {
        onebyfour -= 2;
        onebytwo++;
    }

    result += onebytwo / 2;

    if (onebyfour > 0) {
        result += ceil(onebyfour / 4.0);
    }

    cout << result;

    return 0;
}