#include <iostream>

using namespace std;

char arr[10] = {};
int k;

void max_solve() {
    int num = 9;
    int cnt = 0;
    for(int i = 0; i <= k; i++) {
        if(arr[i] == '<') cnt++;
        else {
            for(int j = num - cnt; j <= num; j++) {
                cout << j;
            }
            num = num - cnt - 1;
            cnt = 0;
        }
    }
}

void min_solve() {
    int num = 0;
    int cnt = 0;
    for(int i = 0; i <= k; i++) {
        if(arr[i] == '>') cnt++;
        else {
            for(int j = num + cnt; j >= num; j--) {
                cout << j;
            }
            num = num + cnt + 1;
            cnt = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> k;

    for(int i = 0; i < k; i++) {
        cin >> arr[i];
    }

    max_solve();
    cout << "\n";
    min_solve();

    return 0;
}