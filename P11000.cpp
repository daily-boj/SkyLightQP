#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

typedef pair<int, int> pii;

vector<pii> arr;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        int s, t;
        cin >> s >> t;
        arr.emplace_back(s, t);
    }

    sort(arr.begin(), arr.end());

    priority_queue<int, vector<int>, greater<int>> end_pq;

    end_pq.push(arr[0].second);

    for(int i = 1; i < N; i++) {
        if(end_pq.top() <= arr[i].first) {
            end_pq.pop();
        }

        end_pq.push(arr[i].second);
    }

    cout << end_pq.size();

    return 0;
}