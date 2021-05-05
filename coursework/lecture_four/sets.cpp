#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> st;
    st.insert(1); // set contains 1
    st.insert(2); // set contains 1 and 2
    st.insert(2); // 2 is not unique and set is unchanged
    st.insert(3);
    st.insert(4);
    cout << st.count(2) << endl; // return of 1 -> set contains element
    st.erase(2); // set contains 1
    cout << st.count(2) << endl; // return of 0 -> set does not contain element
    cout << "--" << endl;
    for (int item : st){
        cout << item << endl;
    }
}