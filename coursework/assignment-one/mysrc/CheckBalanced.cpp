#include <iostream>
#include <stack>
using namespace std;

int checkBalance(string phrase){
    stack<char> s;
    for (int i = 0; i < phrase.size(); i++){
        if (phrase[i] == '{' || phrase[i] == '('){
            s.push(phrase[i]);
        }   
        else if (phrase[i] == '}'){
            if (!s.empty() && s.top() == '{'){
                s.pop();
            }
            else{
                return i;
            }
        }
         else if (phrase[i] == ')'){
            if (!s.empty() && s.top() == '('){
                s.pop();
            }
            else{
                return i;
            }
        }
    }
    if (!s.empty()){
        return phrase.size();
    }
    else{
        return -1;
    };
}

int main()
{
    cout << checkBalance("if (a(4) > 9) {foo(a(2));}") << endl;
    cout << checkBalance("for (i=0;i<a(3};i++) {foo{);)") << endl;
    cout << checkBalance("while (true) foo(); }{(); ") << endl;
    cout << checkBalance("if (x) {") << endl;
}