

#include<iostream>
#include<vector>
using namespace std;
// jisme changes krne hai usko & se mt bhejo baar baar banega space lega like temp vector
void subsetSum(int i,int n,vector<int>&nums,int sum,vector<int>&temp){
if(i>=n){
  temp.push_back(sum);
  return;
}

subsetSum(i+1,n,nums,sum+nums[i],temp);

subsetSum(i+1,n,nums,sum,temp);

}
int main()
{
  vector<int>nums={1,2,3};
  int n=nums.size();
  vector<int>temp;
  subsetSum(0,n,nums,0,temp);
  
    for(auto &it:temp){
      cout<<it<<endl;
    }
return 0;
}
