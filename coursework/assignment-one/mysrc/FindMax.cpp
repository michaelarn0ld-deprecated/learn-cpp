#include <iostream>
#include <vector>
using namespace std;

int greaterOf(int a, int b){
    if (a >= b){
        return a;
    } else {
        return b;
    }
}

int maxOf(vector<int>& nums){
    if (nums.size() <= 1){
        return nums[0];
    } else{
        int front = nums[0];
        nums.erase(nums.begin());
        return greaterOf(front, maxOf(nums));
    }
}

int main()
{
    vector<int> numbers {1,2,5,8,2,12,101,2,6,3,8,23};
    cout << maxOf(numbers);
    return 0;
}