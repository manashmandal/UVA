//AC
#include <iostream>
using namespace std;

#define _A 0
#define _B 1
#define _C 2
#define _D 3
#define _E 4

int color[5];
char options[] = {'A', 'B', 'C', 'D', 'E'};

char optionTicked(int input[]){
    int index = 0;
    int tickCount = 0;
    int blankCount = 0;
    for (int i = 0; i < 5; i++){
        if (input[i] <= 127) {
            tickCount++;
            index = i;
        }
        else blankCount++;
    }
    if (blankCount < 4 || tickCount > 1 || blankCount == 5) return '*';
    else return options[index];
}


int main(void)
{
    int A, B, C, D, E;
    int times;
    std::ios_base::sync_with_stdio(true);

    while (cin >> times){
        if (times == 0) return 0;
        else {
            while(true){
                if (times == 0) break;
                cin >> A >> B >> C >> D >> E;
                color[_A] = A;
                color[_B] = B;
                color[_C] = C;
                color[_D] = D;
                color[_E] = E;
                printf("%c\n", optionTicked(color));
                times--;
            }
        }
    }
}
