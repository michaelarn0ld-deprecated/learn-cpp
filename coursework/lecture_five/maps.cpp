#include <iostream>
#include <fstream>
#include <map>
using namespace std;

void readFile(const string& filename){
    ifstream file;
    map <string, int> tally;
    file.open(filename);
    string word;
    while (file >> word){
        if (!tally.count(word)){
            // tally.insert({word,1});
            tally[word] = 1; 
        }
        else{
            tally[word]++;
        }
    }
    for (auto& s : tally)  {
    cout << '{' << s.first << ':' << s.second << '}' << endl;
    } 
}

int main(){
    readFile("programs.txt");
    return 0;
}