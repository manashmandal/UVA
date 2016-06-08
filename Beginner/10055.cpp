#include <iostream>
#include <stdio.h>

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main(void){
    ll h, o, c;

    while(scanf("%lld %lld", &h, &o) == 2){
        if (h >= o)
            c = h - o;
        else
            c = o - h;
        printf("%lld\n", c);
    }
}

