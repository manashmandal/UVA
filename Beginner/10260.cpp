//AC
#include <iostream>
#include <map>
#include <vector>

using namespace std;

#define debug(x) for (unsigned int i = 0; i < x.size(); i++) cout << x[i]


const char key[] = {'B', 'F', 'P', 'V', 'C', 'G', 'J', 'K', 'Q', 'S' , 'X', 'Z', 'D', 'T', 'L', 'M', 'N', 'R'};
const int vals[] = {1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 5, 5, 6};

//Global map
map <char, int> soundexMap;

//Sets up the map
void setup(void){
    pair <char, int> value;
    for (int i = 0; i < 18; i++){
        value.first = key[i];
        value.second = vals[i];
        soundexMap.insert(soundexMap.begin(), value);
    }
}

int val(char &in){
    return soundexMap[in];
}

int main(void)
{
    vector <int> soundex_values;
    setup();
    std::string input;
    while(cin >> input){
        std::string::iterator inputIter = input.begin();
        while(inputIter != input.end()){
            if (val(*inputIter) != 0){
                int placeholder = val(*inputIter);
                soundex_values.push_back(placeholder);
                inputIter++;
                while(placeholder == val(*inputIter)) inputIter++;
            } else {
                inputIter++;
            }
        }
        debug(soundex_values);
        printf("\n");
        soundex_values.clear();
    }
    return 0;
}
