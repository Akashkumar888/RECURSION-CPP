

#include <bits/stdc++.h>
using namespace std;
void permutations(int i, int n, vector<int> &nums, vector<vector<int>> &ans)
{
  if (i >= n)
  {
    ans.push_back(nums);
    return;
  }
  // multi call recursion
  for (int j = i; j < n; j++)
  {
    swap(nums[i],nums[j]);
    permutations(i + 1, n, nums, ans);
    swap(nums[i],nums[j]);
  }
}
int main()
{
  vector<int> nums = {1, 2, 3};
  int n = nums.size();
  vector<vector<int>> ans;
  vector<int> temp;
  permutations(0, n, nums, ans);
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