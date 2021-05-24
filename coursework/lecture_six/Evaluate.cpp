#include <iostream>
using namespace std;

int evaluateHelper(string s, int& idx){
    char c = s[idx];
    if (c == '('){
        idx++;
        int left = evaluateHelper(s, idx);
        char opr = s[idx];
        idx++;
        int right = evaluateHelper(s, idx);
        idx++;
        if (opr == '+'){
            return left + right;
        }
        else{
            return left * right;
        }
    }
    else{
        idx++;
        return c - '0';
    }
}

int evaluate(string s){
    int index = 0;
    return evaluateHelper(s, index);
}

int main(){
    cout << evaluate("9") << endl;
    cout << evaluate("(4+7)") << endl;
    cout << evaluate("((1+3)*(2+4))") << endl;
    return 0;
}