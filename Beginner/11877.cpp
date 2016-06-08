//AC
#include <stdio.h>
#include <math.h>

int getCocaCola(int n){
    if (n % 2 == 0) return n / 2;
    else return (floor(n / 2));
}

int main(void){
    int a;
    while(scanf("%d", &a)){
        if (a == 0) {return 0;}
        else{
            int count = getCocaCola(a);
            printf("%d\n", count);
        }
    }
    return 0;
}