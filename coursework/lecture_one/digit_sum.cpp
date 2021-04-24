// this program takes an interger value and returns the sum of all of its digits
// 1258 = 1 + 2 + 5 + 8 = 16

#include <iostream>
using namespace std;

int sumOfDigits(int n){
    int result = 0;
    while (n > 0){
        result += (n % 10);
        n /= 10;
    }
    return result;
}

int main()
{
    int n;
    cout << "Enter a number: \n";
    cin >> n;
    int printout = sumOfDigits(n);
    cout << printout;
    return 0;
}