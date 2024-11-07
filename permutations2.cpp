
#include <bits/stdc++.h>
using namespace std;
void permutations2(int i,vector<int>&nums,vector<vector<int>>&result){
    if(i>=nums.size()){
        result.push_back(nums);
        return;
    }
    unordered_set<int>visited;
    for(int j=i;j<nums.size();j++){
        if(visited.find(nums[j])!=visited.end())continue;
        visited.insert(nums[j]);
        swap(nums[i],nums[j]); // do

        permutations2(i+1,nums,result); // explore
        swap(nums[i],nums[j]); // undo
    }
}
int main()
{
  vector<int> nums = {1, 1, 2};
  vector<vector<int>> ans;
  vector<int> temp;
  permutations2(0, nums, ans);
  for (auto &vec : ans)
  {
    for (auto &it : vec)
    {
      cout << it << " ";
    }
    cout << endl;
  }
  return 0;
}