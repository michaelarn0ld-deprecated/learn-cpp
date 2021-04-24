#include <iostream>
using namespace std;

int main()
{
    double distance = 0;
    char units = 0;
    cout << "What is the distance? \n";
    cin >> distance >> units;
    if (units == 'm') cout << "That is " << distance * 1.609 << " km";
    else if (units == 'k') cout << "That is " << distance / 1.609 << " mi";
}