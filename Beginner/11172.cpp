
//AC
#include <iostream>
#include <stdio.h>
#define newline (printf("\n"))

using namespace std;

typedef signed long long sll;

int main(void)
{
    unsigned int testCase;

    scanf("%d", &testCase);

    while(testCase--){
        sll a;
        sll b;

        cin >> a >> b;

        if (a > b) putchar('>');
        else if (a < b) putchar('<');
        else putchar('=');

        newline;
    }

}
