/*
 * Baekjoon - 드높은 남산 위에 우뚝 선
 * https://www.acmicpc.net/problem/21965
 * 2022년 01월 21일
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int arr[100001];
    int tmp = 0;
    bool over = false;

    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
        tmp = max(tmp, arr[i]);
    }

    for (int i = 0; i < N - 1; ++i) {
        if (arr[i] == tmp) over = true;
        if (over) {
            if (arr[i + 1] >= arr[i]) {
                cout << "NO";
                return 0;
            }
        } else {
            if (arr[i + 1] <= arr[i]) {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";

    return 0;
}