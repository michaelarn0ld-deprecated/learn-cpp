#include <iostream>
#include <vector>
using namespace std;

void permuteHelper(vector<string>& v, vector<string> path){
    if (v.empty()){
        for (string s : path){
            cout << s << ' ';
        }
        cout << endl;
    }
    else{
        for (string item : v){
            path.push_back(item);
            vector<string> v2;
            for (string choice : v){
                if (choice != item){
                    v2.push_back(choice);
                }
            }
            permuteHelper(v2,path);
            path.pop_back();
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