#include <iostream>
using namespace std;

void printBinary(int n, string s){
    if (n == 0){
        cout << s << endl;
    }
    else{
        printBinary(n-1, s+"1");
        printBinary(n-1, s+"0");
    }
}

int main(){
    printBinary(16,"");
}