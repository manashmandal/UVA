//AC

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

typedef long long ll;

std::string getTriangleType(vector <ll> &arms){
    std::sort(arms.begin(), arms.end());
    if (arms[0] + arms[1] > arms[2]){
        if (arms[0] == arms[1]){
            if (arms[0] == arms[2]) return "Equilateral";
            else return "Isosceles";
        } else if (arms[1] == arms[2]){
            if (arms[2] == arms[0]) return "Equilateral";
            else return "Isosceles";
        } else return "Scalene";
    }
    else return "Invalid";
}

int main(void){
    ll turns = 0;
    ll cases = 1;
    cin >> turns;

    if (turns > 0 && turns < 20){
        while(turns--){
            ll a;
            ll b;
            ll c;

            cin >> a >> b >> c;

            vector <ll> triangle;
            triangle.push_back(a);
            triangle.push_back(b);
            triangle.push_back(c);

            const char *triag_type = getTriangleType(triangle).c_str();

            printf("Case %lld: %s\n", cases, triag_type);
            cases++;
        }
    } else return 0;

}
