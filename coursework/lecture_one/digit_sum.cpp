// this program takes an interger value and returns the sum of all of its digits
// 1258 = 1 + 2 + 5 + 8 = 16

#include <iostream>
using namespace std;

int sumOfDigits(int n){
    int result = 0;
    while (n >= 10){
        result += (n % 10);
        n /= 10;
    }
    result += n;
    return result;
}

int main()
{
    int printout = sumOfDigits(837);
    cout << printout;
    return 0;
}