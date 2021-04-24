// this program outputs the compute of n!
//  ex) 4! = 4 * 3 * 2 * 1 = 24

#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0) return 1;
    return n*factorial(n-1);
}

int main()
{
    int input;
    cout << "Input a number: \n";
    cin >> input;
    cout << factorial(input);
}