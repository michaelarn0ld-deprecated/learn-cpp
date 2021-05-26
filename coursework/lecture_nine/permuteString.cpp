#include <iostream>
#include <vector>
using namespace std;

void permuteHelper(vector<string>& v, vector<string>& chosen){
    if (v.empty()){
        for (string s : chosen){
            cout << s << ' ';
        }
        cout << endl;
    }
    else{
        for (string choice : v){
            // choose
            chosen.push_back(choice);

            // explore
            vector<string> remainingMoves;
            for (string remainingMove : v){
                if (remainingMove != choice){
                    remainingMoves.push_back(remainingMove);
                }
            }
            permuteHelper(remainingMoves,chosen);

            // unchoose
            chosen.pop_back();
        }
    }
}

void permuteString(vector<string>& v){
    vector<string> s;
    permuteHelper(v,s);
}

int main(){
    vector<string> s {"a","b","c","d"};
    permuteString(s);
    return 0;
} 