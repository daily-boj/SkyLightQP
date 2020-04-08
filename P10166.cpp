#include <cstdio>
#include <unordered_set>

using namespace std;

unordered_set<double> check;

int main() {
    int d1, d2;
    scanf("%d %d", &d1, &d2);

    for(int i = d1; i <= d2; i++) {
        for(int j = 1; j <= i; j++) {
            check.insert((double)j / (double)i);
        }
    }

    printf("%d", check.size());

    return 0;
}