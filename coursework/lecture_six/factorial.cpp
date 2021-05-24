#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main(){
    int n;
    cout << "Input a number" << endl;
    cin >> n;
    cout << endl << factorial(n) << endl;
    return 0;
}