#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {
        string str;
        cin >> str;

        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0;
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == 'T' && str[i + 1] == 'T' && str[i + 2] == 'T') a++;
            else if(str[i] == 'T' && str[i + 1] == 'T' && str[i + 2] == 'H') b++;
            else if(str[i] == 'T' && str[i + 1] == 'H' && str[i + 2] == 'T') c++;
            else if(str[i] == 'T' && str[i + 1] == 'H' && str[i + 2] == 'H') d++;
            else if(str[i] == 'H' && str[i + 1] == 'T' && str[i + 2] == 'T') e++;
            else if(str[i] == 'H' && str[i + 1] == 'T' && str[i + 2] == 'H') f++;
            else if(str[i] == 'H' && str[i + 1] == 'H' && str[i + 2] == 'T') g++;
            else if(str[i] == 'H' && str[i + 1] == 'H' && str[i + 2] == 'H') h++;
        }

        cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << "\n";
    }

    return 0;
}