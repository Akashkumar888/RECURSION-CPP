
#include<iostream>
#include<vector>
using namespace std;
int perfectSum(int i,int n,vector<int>&nums,int sum){
// if(sum==0)return 1; if arr element is positive  greater than 0
// if(sum<0 || i>=n)return 0;

if(i==n){
  return sum==0; // if arr include 0 
}

return perfectSum(i+1,n,nums,sum-nums[i]) + perfectSum(i+1,n,nums,sum);

}
int main()
{
  vector<int>nums={0,1,2,3,4};
  int tr=7;
  int n=nums.size();
  cout<<perfectSum(0,n,nums,tr);
  
return 0;
}

