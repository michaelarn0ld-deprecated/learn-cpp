#include <iostream>
#include <map>
#include <set>
using namespace std;


int chooseRandom(set<int>& s){
    int n = rand() % s.size();
    auto it = s.begin();
    for (int i = 0; i < n; i++){
        it++;
    }
    int result = (*it);
    s.erase(result);
    return result;
}

int main(){
    set <int> s {11,12,1,4,32,67,88,56,31,17};
    while (!s.empty()){
        cout << chooseRandom(s) << endl;
    };
}