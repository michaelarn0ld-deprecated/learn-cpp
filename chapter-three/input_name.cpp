#include <iostream>
using namespace std;

int main()
{
    cout << "Input your name and age (in years)!\n";
    string name;
    int age;
    cin >> name >> age;
    cout << "Hello, " << name << " (age " << age * 12 << " months)\n"; // outputs the age in months
}