
#include <bits/stdc++.h>
using namespace std;
void permutations(int i, int n, vector<int> &nums, vector<int> &temp, vector<vector<int>> &ans)
{
  if (i >= n)
  {
    ans.push_back(temp);
    return;
  }
  // multi call recursion
  for (int j = 0; j < n; j++)
  {
    if (find(temp.begin(), temp.end(), nums[j]) == temp.end())
    { // it is not in temp
      temp.push_back(nums[j]);
      permutations(i + 1, n, nums, temp, ans);
      temp.pop_back();
    }
  }
}
int main()
{
  vector<int> nums = {1, 2, 3};
  int n = nums.size();
  vector<vector<int>> ans;
  vector<int> temp;
  permutations(0, n, nums, temp, ans);
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