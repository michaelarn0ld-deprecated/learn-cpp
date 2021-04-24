#include <iostream>
using namespace std;

int main()
{
    string first_name;
    string last_name;
    string some_guy;
    char sex = 0;
    int age;

    cout << "Please enter your first and last name!";
    cin >> first_name >> last_name;
    cout << "Hello, " << first_name << ' ' << last_name << '\n'
         << "How are you doing? Are you excited to learn C++ \n"
         << "Please input the name of a friend, their age, and their sex: \n";
    cin >> some_guy >> age >> sex;
    cout << "Have you seen " << some_guy << " lately? \n";

    if (sex == 'm') cout << "Ask him to say hello\n";
    else if (sex == 'f') cout << "Ask her to say hello\n";
    else cout <<"Ask them to say hello\n";

    if (age < 12) cout << "next year you will be " << age + 1;
    else if (age == 17) cout << "next year you will be able to vote";
    else if (age > 70) cout << "I hope you are enjoying retirement";
}