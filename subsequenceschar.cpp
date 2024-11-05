

#include<iostream>
#include<vector>
using namespace std;
// jisme changes krne hai usko & se mt bhejo baar baar banega space lega like temp vector
void subsequence(int i,int n,string &nums,vector<char>&temp,vector<vector<char>>&ans){
if(i>=n){
  ans.push_back(temp);
  return;
}
//temp.pop_back();
temp.push_back(nums[i]);
subsequence(i+1,n,nums,temp,ans);


temp.pop_back();
subsequence(i+1,n,nums,temp,ans);

}
int main()
{
  string nums="abc";
  int n=nums.size();
  vector<vector<char>>ans;
  vector<char>temp;
  subsequence(0,n,nums,temp,ans);
  for(auto &vec:ans){
    for(auto &it:vec){
      cout<<it<<" ";
    }
    cout<<endl;
  }
return 0;
}
