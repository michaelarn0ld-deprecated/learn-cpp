#include <iostream>
using namespace std;

string reverseOf(string s){
    if (s.length() == 1) return s;
    else{
        return reverseOf(s.substr(1)) + s[0];
    }
}

int main() 
{
    string reverse_string = reverseOf("Bark");
    cout << reverse_string << endl;
    return 0;
}