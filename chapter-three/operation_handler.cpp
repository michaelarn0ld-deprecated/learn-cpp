#include <iostream>
using namespace std;

int main()
{
    double operand_one = 0;
    double operand_two = 0;
    char operator_tag = 0;

    cout << "Input a function \n";
    cin >> operator_tag >> operand_one >> operand_two;

    if (operator_tag == '+') cout << operand_one + operand_two;
    if (operator_tag == '-') cout << operand_one - operand_two;
    if (operator_tag == '*') cout << operand_one * operand_two;
    if (operator_tag == '/') cout << operand_one / operand_two; 
}