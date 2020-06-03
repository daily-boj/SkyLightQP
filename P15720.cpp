#include <iostream>
#include <algorithm>

using namespace std;

int Barr[10001] = {};
int Carr[10001] = {};
int Darr[10001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int B, C, D;
    cin >> B >> C >> D;

    int minAmount = min(B, min(C, D));

    int total = 0;
    for (int i = 0; i < B; i++) {
        cin >> Barr[i];
        total += Barr[i];
    }

    for (int i = 0; i < C; i++) {
        cin >> Carr[i];
        total += Carr[i];
    }

    for (int i = 0; i < D; i++) {
        cin >> Darr[i];
        total += Darr[i];
    }

    sort(Barr, Barr + B, greater<int>());
    sort(Carr, Carr + C, greater<int>());
    sort(Darr, Darr + D, greater<int>());

    int result = 0;
    for (int i = 0; i < minAmount; i++) result += (Barr[i] + Carr[i] + Darr[i]) * 0.9;
    for (int i = minAmount; i < B; i++) result += Barr[i];
    for (int i = minAmount; i < C; i++) result += Carr[i];
    for (int i = minAmount; i < D; i++) result += Darr[i];

    cout << total << "\n" << result;

    return 0;
}