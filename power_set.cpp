#include<iostream>
#include<vector>
using namespace std;
void f(int i,int n,int *arr,vector<int>&ans,vector<vector<int>>&result){
if(i>=n){
    result.push_back(ans);
    return;
}

ans.push_back(arr[i]);// pick
f(i+1,n,arr,ans,result); // explore

ans.pop_back();// notpick
f(i+1,n,arr,ans,result); // explore
}

int main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    vector<vector<int>>result;
    f(0,n,arr,ans,result);
    for(auto &row:result){
        for(auto &ele:row){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
return 0;
}