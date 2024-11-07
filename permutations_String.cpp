<<<<<<< HEAD


#include <bits/stdc++.h>
using namespace std;
void permutations(int i, int n, string &nums, vector<string> &ans)
{
  if (i >= n)
  {
    ans.push_back(nums);
    return;
  }
  // multi call recursion
  for (int j = i; j < n; j++)
  {
    swap(nums[i], nums[j]);
    permutations(i + 1, n, nums, ans);
    swap(nums[i], nums[j]);
  }
}
int main()
{
  string nums = "abc";
  int n = nums.size();
  vector<string> ans;
  vector<int> temp;
  permutations(0, n, nums, ans);
  for (auto &str : ans)
  {
    cout << str << endl;
  }
  return 0;
=======


#include <bits/stdc++.h>
using namespace std;
void permutations(int i, int n, string &nums, vector<string> &ans)
{
  if (i >= n)
  {
    ans.push_back(nums);
    return;
  }
  // multi call recursion
  for (int j = i; j < n; j++)
  {
    swap(nums[i], nums[j]);
    permutations(i + 1, n, nums, ans);
    swap(nums[i], nums[j]);
  }
}
int main()
{
  string nums = "abc";
  int n = nums.size();
  vector<string> ans;
  vector<int> temp;
  permutations(0, n, nums, ans);
  for (auto &str : ans)
  {
    cout << str << endl;
  }
  return 0;
>>>>>>> 1b56fea6951abb655df0e6c0fe10079aa8931946
}