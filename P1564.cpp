#include <iostream>
#include <string>
#include <sstream>

using namespace std;

typedef long long ll;

namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    ll fac = 1;
    for(int i = N; i >= 1; i--) {
        fac *= i;

        while (fac % 10 == 0) {
            fac /= 10;
        }

        fac %= 1000000000000;
    }

    string s = patch::to_string(fac);

    int idx = s.length() - 1;
    cout << s[idx - 4] << s[idx - 3] << s[idx - 2] << s[idx - 1] << s[idx];

    return 0;
}