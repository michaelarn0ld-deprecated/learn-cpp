#include <iostream>
using namespace std;

int main()
{
    int int1;
    int int2;
    int int3;
    cout << "Enter three numbers: \n";
    cin >> int1 >> int2 >> int3;
    if (int1 <= int2 && int2 <= int3) cout << int1 << int2 << int3;
    if (int1 <= int3 && int3 <= int2) cout << int1 << int3 << int2;
    if (int2 <= int1 && int1 <= int3) cout << int2 << int1 << int3;
    if (int2 <= int3 && int3 <= int1) cout << int2 << int3 << int1;
    if (int3 <= int2 && int2 <= int1) cout << int3 << int2 << int1;
    if (int3 <= int1 && int1 <= int2) cout << int3 << int1 << int2;
}