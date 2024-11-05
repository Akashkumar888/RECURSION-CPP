#include<iostream>
#include<vector>
using namespace std;
class Solution {
   public:
    void solve(int* nums ,int * output , int index ,int n ,int a) {
        // base case 
        if(index>=n){
           for(int i=0;i<a;i++) cout<<output[i]<<" ";
           cout<<endl;
           return ;
        }
        solve(nums,output,index+1,n,a);
        output[a++]=nums[index];
        solve(nums,output,index+1,n,a);
    }
};
int main(){
            cout<<"hi"<<endl;
     int output[3] ;
     Solution ob;
    int nums[]={1,2,3};
     ob. solve(nums,output,0,3,0);
    return 0;
}