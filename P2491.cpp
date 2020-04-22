#include <iostream>

using namespace std;

int arr[100001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];

    int asc = 1, desc = 1;

    int temp = 1;
    for(int i = 1; i < N; i++) {
        if(arr[i] >= arr[i - 1]) {
            temp++;
        } else temp = 1;
        asc = max(asc, temp);
    }

    temp = 1;
    for(int i = (N - 1); i >= 1; i--) {
        if(arr[i] <= arr[i - 1]) {
            temp++;
        } else temp = 1;
        desc = max(desc, temp);
    }

    cout << max(asc, desc);

    return 0;
}