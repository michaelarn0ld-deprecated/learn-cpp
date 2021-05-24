#include <iostream>
using namespace std;

bool isPalindrome(string phrase);

int main(){
    cout << isPalindrome("the rer eht") << endl;
    return 0;
}

bool isPalindrome(string phrase){
    if (phrase.size() <= 1){
        return true;
    }
    char a = phrase[0];
    char b = phrase[phrase.size() - 1];
    string middle = phrase.substr(1, phrase.size() - 2);
    if (a == b && isPalindrome(middle)){
        return true;
    }else{
        return false;
    }
}