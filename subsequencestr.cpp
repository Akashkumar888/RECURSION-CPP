

#include<iostream>
#include<vector>
using namespace std;
void subsequence(int i,int n,string &nums,string &temp,vector<string>&ans){
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
 vector<string>ans;
 string temp="";
subsequence(0,n,nums,temp,ans);
for(int i=0;i<ans.size();i++){
cout<<ans[i]<<endl;
}
return 0;
}
