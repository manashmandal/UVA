//Commented out works too but got TLE for bad algo


//#include <iostream>
//#include <vector>
//#include <algorithm>


//using namespace std;

//#define print_vector(vec) for (int i = 0; i < vec.size(); i++) cout << vec[i] << endl

//int bricksPerTile = 0;
//unsigned int moves = 0;

//int sum(vector <int> &v){
//    int sum = 0;
//    for (int i = 0; i < v.size(); i++) sum += v[i];
//    return sum;
//}

//void separateBrickTile(vector <int> &bricks, vector <int> &donor, vector <int> &receiver){
//    for (int i = 0; i < bricks.size(); i++){
//        if (bricks[i] < bricksPerTile) receiver.push_back(bricks[i]);
//        else if (bricks[i] > bricksPerTile) donor.push_back(bricks[i]);
//    }
//}

//void calculateMoves(vector <int> &donor, vector <int> &receiver){
//    int donor_index = 0;
//    int receiver_index = 0;
//    while(donor_index != donor.size()){
//        int move = 0;
//        for (int i = 0; i < receiver.size(); i++){
//            int can_give = donor[donor_index] - bricksPerTile;
//            int can_get = bricksPerTile - receiver[i];
//            if (can_give > can_get){
//                move = can_get;
//                donor[donor_index] = donor[donor_index] - move;
//                receiver[i] += move;
//                moves += move;
//            } else if (can_give < can_get){
//                move = can_give;
//                donor[donor_index] = donor[donor_index] - move;
//                receiver[i] += move;
//                moves += move;
//                donor_index++;
//            } else if (can_give == can_get){
//                move = can_give;
//                donor[donor_index] = donor[donor_index] - move;
//                receiver[i] = receiver[i] + move;
//                moves += move;
//                donor_index++;
//            }
//        }
//    }
//}

//int main(int argc, char *argv[])
//{
//    vector <int> receiver;
//    vector <int> donor;
//    vector <int> bricks;
//    int input;

//    std::ios_base::sync_with_stdio(true);

//    int times;
//    int set = 1;
//    while(cin >> times, times != 0){
//        while(times--){
//            cin >> input;
//            bricks.push_back(input);
//        }
//        bricksPerTile = sum(bricks) / bricks.size();
//        separateBrickTile(bricks, donor, receiver);
//        calculateMoves(donor, receiver);
//        cout << "Set #" << set << "\n"
//             << "The minimum number of moves is " << moves << ".\n";
//        moves = 0;
//        bricks.clear();
//        receiver.clear();
//        donor.clear();
//        set++;
//    }
//}


//AC
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int moves = 0;

void getMoves(vector<int> &v){
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    int bricksPerTile = sum / v.size();

    moves = 0;

    for (int i = 0; i < v.size(); i++){
        if (v[i] < bricksPerTile) moves += bricksPerTile - v[i];
    }

}


int main(void){
    int times;
    int set = 1;
    int input;
    vector <int> bricks;
    while(cin >> times, times != 0){
        while(times--){
            cin >> input;
            bricks.push_back(input);
        }
        getMoves(bricks);
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",set,moves);
        moves = 0;
        bricks.clear();
        set++;
    }

}
