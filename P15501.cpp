#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;
vector<int> rarr;
int pos[1000001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
        pos[arr[i]] = i;
    }

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        rarr.push_back(a);
    }

    auto rev = rarr;
    int p = N - pos[rarr[0]];

    rotate(rarr.begin(), rarr.begin() + p, rarr.end());

    reverse(rev.begin(), rev.end());
    rotate(rev.begin(), rev.begin() + (p - 1), rev.end());

    if (arr == rarr || arr == rev) cout << "good puzzle";
    else cout << "bad puzzle";

    return 0;
}