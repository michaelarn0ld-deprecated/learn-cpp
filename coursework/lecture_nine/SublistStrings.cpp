#include <iostream>
#include <set>
#include <vector>
using namespace std;

void sublistHelper(vector<string>& v, vector<string>& chosen){
    if (v.empty()){
        // base case
        cout << "{ ";
        for (string s : chosen){
            cout << s << ' ';
        }
        cout << '}';
        cout << endl;
    }
    else{
        cout << "v is: ";
        for (string s : v){
        cout << s << ' ';
        }
        cout << "  chosen is: ";
        for (string s : chosen){
        cout << s << ' ';
        }

        // for all choices
        string s = v[0];
        cout << "  removal is: " << s;
        cout << endl;

        v.erase(v.begin());

        //explore / choose without s
        sublistHelper(v,chosen);

        //explore / choose with s
        chosen.push_back(s);
        sublistHelper(v, chosen);

        // unchoose
        v.insert(v.begin(), s);
        chosen.pop_back();

        cout << endl << endl;
    }

}

void sublist(vector<string> v){
    vector <string> chosen;
    sublistHelper(v,chosen);
}

int main(){
    sublist({"a","b","c"});
}
