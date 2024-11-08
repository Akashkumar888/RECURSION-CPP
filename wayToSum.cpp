

#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int waysToSum(int i, int n, vector<int> &arr, int tr, vector<int> &dp)
{
  if (tr < 0 || i >= n)
    return 0;
  if (tr == 0)
    return 1;
  if (dp[tr] != -1)
    return dp[tr];
  int ans = 0;
  // Repetitions and different arrangements are allowed.
  // then it start from j=0;
  for (int j = 0; j < n; j++)
  {
    ans = (ans + waysToSum(j, n, arr, tr - arr[j], dp)) % mod;
  }
  return dp[tr] = ans;
}
int main()
{
  vector<int> arr = {1, 5, 6};
  int n = arr.size();
  int sum = 7;
  vector<int> dp(sum + 1, -1);
  cout << waysToSum(0, n, arr, sum, dp);
  return 0;
}