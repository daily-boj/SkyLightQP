#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> arr;
vector<int> sorted;

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
        sorted.push_back(a);
    }

    sort(sorted.begin(), sorted.end());
    sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());

    for (int i = 0; i < N; i++) {
        cout << lower_bound(sorted.begin(), sorted.end(), arr[i]) - sorted.begin() << " ";
    }

    return 0;
}