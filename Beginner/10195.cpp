//AC
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;
typedef long double uld;

uld getRadius(uld &a, uld &b, uld &c){
    uld p = (a + b + c) / 2;
    uld r = sqrt(p* (p - a) * (p - b) * (p - c)) / p;
    return r;
}

int main(void){
    std::ios_base::sync_with_stdio(true);
    cout << fixed << setprecision(3);
    uld a;
    uld b;
    uld c;

    while(cin >> a >> b >> c){
        if (a == 0 && b == 0 && c == 0){
            cout <<  "The radius of the round table is: " << 0.000 << "\n";
        } else {
            uld r = getRadius(a, b, c);
            cout << fixed << setprecision(3);
            cout << "The radius of the round table is: " << r << "\n";
        }
    }
}
