#include <vector>
#include <iostream>
using namespace std;

int calls = 0;

void diceHelp(int dice, int sum, vector<int>& seq){
    calls++;
    if (dice == 0){
        if (sum == 0){
            for (int i : seq){
                cout << i << ", ";
            }
            cout << endl;
        }
    }
    else if (sum >= dice && sum <= dice * 6){
        for (int i = 1; i <= 6; i++){
            seq.push_back(i);
            diceHelp(dice - 1, sum - i, seq);
            seq.erase(seq.end() - 1);
    }
}
}

void diceRoll(int dice, int sum){
    vector <int> v;
    diceHelp(dice,sum,v);
}


int main(){
    diceRoll(4,17);
    cout << calls;
    return 0;
}