
#include<iostream>
#include<vector>
using namespace std;
// jisme changes krne hai usko & se mt bhejo baar baar banega space lega like temp vector
void subsequence(int i,int n,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans){
if(i>=n){
  ans.push_back(temp);
  return;
}
//temp.pop_back();
subsequence(i+1,n,nums,temp,ans);

temp.push_back(nums[i]);
subsequence(i+1,n,nums,temp,ans);
temp.pop_back();

}
int main()
{
  vector<int>nums={1,2,3};
  int n=nums.size();
  vector<vector<int>>ans;
  vector<int>temp;
  subsequence(0,n,nums,temp,ans);
  for(auto &vec:ans){
    for(auto &it:vec){
      cout<<it<<" ";
    }
    cout<<endl;
  }
return 0;
}
