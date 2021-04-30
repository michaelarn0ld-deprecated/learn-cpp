#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void stutterQ(queue<int>& q){
    int n = q.size();
    for (int i = 0; i < n; i++){
        q.push(q.front());
        q.push(q.front());
        q.pop();
    }
}

void mirrorQ(queue<int>& q){
    stack<int> s;
    int n = q.size();
    for (int i = 0; i < n; i++){
        s.push(q.front());
        q.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

int main()
{
    queue<int> stutter;
    stutter.push(1);
    stutter.push(2);
    stutter.push(3);
    stutterQ(stutter);
    while(!stutter.empty()){
        cout << stutter.front() << ", ";
        stutter.pop();
    }

    cout << endl;

    queue<int> mirror;
    mirror.push(1);
    mirror.push(2);
    mirror.push(3);
    mirrorQ(mirror);
    while(!mirror.empty()){
        cout << mirror.front() << ", ";
        mirror.pop();
    }

    return 0;
}