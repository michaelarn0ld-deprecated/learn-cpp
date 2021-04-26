#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char c){
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'){
        return true;
    }
    else{
        return false;
    }
}

string onlyConnect(string phrase){
    if (phrase.length() == 0){
        return "";
    }
    char c = toupper(phrase[0]);
    if (isVowel(c) || !isalpha(c)){
        return onlyConnect(phrase.substr(1));
    }
    else{
        return c + onlyConnect(phrase.substr(1));
    }
}

int main()
{
    string test = "Beauty and the beast";
    cout << onlyConnect(test);
}