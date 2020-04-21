#include <iostream>

using namespace std;

int node[10001] = {};

void find(int start, int end) {
    if(start > end) return;

    int own = node[start];
    int temp = end;
    while(own < node[temp]) {
        temp--;
    }

    find(start + 1, temp);
    find(temp + 1, end);
    cout << own << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, i = 0;
    while(cin >> N) {
        node[i] = N;
        i++;
    }

    find(0, i - 1);

    return 0;
}