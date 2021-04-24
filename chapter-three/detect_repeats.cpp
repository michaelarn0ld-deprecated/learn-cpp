#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    string previous = "";
    string current;
    while (cin >> current){
        ++count;
        if (current == previous)
            cout << "Repeated word at word " << count << '\n';
        previous = current;
    }
}