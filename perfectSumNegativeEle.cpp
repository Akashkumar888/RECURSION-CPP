
#include<iostream>
#include<vector>
using namespace std;

int perfectSum(int i, int n, vector<int>& nums, int sum) {
    // if(sum==0)return 1; if arr element is positive  greater than 0
// if(sum<0 || i>=n)return 0;

    if (i == n) {
        return sum == 0;  
    }
    
    int include = perfectSum(i + 1, n, nums, sum - nums[i]);
    int exclude = perfectSum(i + 1, n, nums, sum);
    return include + exclude;
}

int main() {
    vector<int> nums = {0, 1, -2, 3, 4};  
    int target = 7;
    int n = nums.size();
    cout << perfectSum(0, n, nums, target);  
    return 0;
}
