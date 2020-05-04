#include <iostream>

using namespace std;

int bin_to_dec(int n) {
    int result = 0, temp = 1;
    while (n) {
        if (n % 2) result += temp;
        temp *= 2;
        n /= 10;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int memory[32] = {};
    int adder = 0;
    int PC = 0;

    int a;
    while (cin >> a) {
        memory[0] = bin_to_dec(a);
        adder = 0;
        PC = 0;

        for (int i = 1; i < 32; i++) {
            cin >> a;
            memory[i] = bin_to_dec(a);
        }

        while (1) {
            int op = memory[PC] / 32;
            int x = memory[PC] % 32;

            PC = (PC + 1) % 32;

            if (op == 0) {
                memory[x] = adder;
            } else if (op == 1) {
                adder = memory[x];
            } else if (op == 2) {
                if (adder == 0) {
                    PC = x;
                }
            } else if (op == 4) {
                adder = (adder + 255) % 256;
            } else if (op == 5) {
                adder = (adder + 1) % 256;
            } else if (op == 6) {
                PC = x;
            } else if (op == 7) {
                break;
            }
        }

        for (int i = 7; i >= 0; i--) {
            cout << ((adder >> i) & 1);
        }
        cout << "\n";
    }

    return 0;
}