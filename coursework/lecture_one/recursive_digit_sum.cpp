// this program recursively sums the digits of an interger n
//  235 returns 10

#include <iostream>
using namespace std;

int sumDigits(int n){
    if (n<10) return n;
    else{
        return sumDigits(n/10) + (n%10);
    }
}

int main()
{
    int digit_sum;
    cout << "Input a number: ";
    cin >> digit_sum;
    cout << sumDigits(digit_sum);
}