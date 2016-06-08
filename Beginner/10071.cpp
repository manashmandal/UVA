//p10071
//AC
#include <iostream>
#include <stdio.h>

using namespace std;

typedef signed long long sll;
typedef unsigned long long ull;
typedef long long ll;

int main(void){
    ll velocity;
    ll time;
    ll distance;
    while (scanf("%lld %lld", &velocity, &time) == 2){
        distance = velocity * time * 2;
        printf("%d\n", distance);
    }
}
