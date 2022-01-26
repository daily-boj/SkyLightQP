#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int T = 1;
    while(true) {
        int a, b, c; scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) break;

        printf("Triangle #%d\n", T);
        if (a == -1) {
            if (b >= c) printf("Impossible.\n");
            else printf("a = %.3lf\n", sqrt(c*c-b*b));
        }
        if (b == -1) {
            if (a >= c) printf("Impossible.\n");
            else printf("b = %.3lf\n", sqrt(c*c-a*a));
        }
        if (c == -1) {
            printf("c = %.3lf\n", sqrt(a*a+b*b));
        }
        T++;
        printf("\n");
    }

    return 0;
}