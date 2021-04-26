#include <iostream>
using namespace std;

string bSequence(int n);

string aSequence(int n){
    if (n == 0){
        return "A";
    } else {
        return aSequence(n-1) + bSequence(n-1);
    }
}

string bSequence(int n){
    if (n == 0){
        return "B";
    } else {
        return bSequence(n-1) + aSequence(n-1);
    }
}

int main()
{
    int num_games = 4;
    cout << aSequence(num_games) << endl;
    cout << bSequence(num_games) << endl;
    return 0;
}