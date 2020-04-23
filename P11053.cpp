#include <iostream>
#include <algorithm>

using namespace std;

int dp[1001] = {};
int arr[1001] = {};

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
        dp[i] = 1;

        for(int j = 0; j < i; j++) {
            if(arr[i] > arr[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }

        result = max(result, dp[i]);
    }

    cout << result;
	
    return 0;
}
