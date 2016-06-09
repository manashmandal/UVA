//AC
#include <iostream>

using namespace std;

typedef long long ll;

ll a, b, c, d, L;

ll f(ll &x){
    return ((a * x * x) + (b * x) + c);
}

int main(void){
    std::ios_base::sync_with_stdio(true);
    ll count = 0;
    while (cin >> a >> b >> c >> d >> L){
        if (a != b != c != d != L != 0){
            for (ll i = 0; i <= L; i++){
                if (f(i) % d == 0) count++;
            }
            cout << count << "\n";
            count = 0;
        } else return 0;
    }
}
