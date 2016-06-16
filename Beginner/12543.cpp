#include <iostream>
#include <algorithm>
using namespace std;

bool is_allowed(char &c){
    if (isdigit(c)) return false;
    if (isalpha(c) || c == '-') return true;
    else return false;
}

int main(int argc, char *argv[])
{
    std::ios_base::sync_with_stdio();
    std::string input;
    std::string prev_input("");
    while (cin >> input , input != "E-N-D"){
        std::string filtered_input;
        for (int i = 0; i < input.size(); i++){
            if (is_allowed(input[i])){
                filtered_input += input[i];
            }
        }
        if (filtered_input.size() > prev_input.size()){
            prev_input = filtered_input;
        }
    }

    std::transform(prev_input.begin(), prev_input.end(), prev_input.begin() ,::tolower);
    cout << prev_input << endl;
}
