//AC

#include <iostream>
#include <stdio.h>


using namespace std;

typedef unsigned long long ull;

ull get_odd_sum(ull &upper, ull &lower){
    ull sum = 0;

    //Workaround for even numbers
    if (lower % 2 == 0) lower++;
    ull next = lower;

    while (next <= upper){
        sum += next;
        next += 2;
    }

    return sum;
}

int main(void){
    ull testCase;
    ull caseNo = 1;

    cin >> testCase;

    while(testCase--){
        ull lower;
        ull upper;
        cin >> lower >> upper;
        cout << "Case " << caseNo << ": " << get_odd_sum(upper, lower) << "\n";
        caseNo++;
    }
}
