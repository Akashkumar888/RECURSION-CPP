
#include<iostream>
#include<vector>
using namespace std;
int targetSum(int i,int n,vector<int>&nums,int sum){
if(sum==0)return 1;
if(sum<0 || i>=n)return 0;

return targetSum(i,n,nums,sum-nums[i]) + targetSum(i+1,n,nums,sum);

}
int main()
{
  vector<int>nums={1,2,3,4};
  int tr=7;
  int n=nums.size();
  cout<<targetSum(0,n,nums,tr);
  
return 0;
}
