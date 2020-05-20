#include <iostream>

using namespace std;

int arr[30001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int result = 0;
    for(int i = 0; i < N; i++) {
        int temp = 0;
        for(int j = i+1; j < N; j++) {
            if(arr[i] > arr[j]) {
                temp++;
            } else {
                break;
            }
        }
        result = max(result, temp);
    }

    cout << result;

    return 0;
}