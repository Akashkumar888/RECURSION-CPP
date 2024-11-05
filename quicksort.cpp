#include<iostream>
#include<vector>
using namespace std;

int partition(int start,int end,vector<int>&nums){
int pivotElement=nums[end];
int pos=start;
for(int i=start;i<=end;i++){
 if(nums[i]<=pivotElement){
  swap(nums[pos],nums[i]);
  pos++;
 }
}
return pos-1;
}

void quickSort(int start,int end,vector<int>&nums){
  if(start>=end)return;

  int pivotIdx=partition(start,end,nums);
  quickSort(start,pivotIdx-1,nums);
  quickSort(pivotIdx+1,end,nums);
}

int main()
{
  vector<int>arr={9,7,8,3,6,4,5,2,1,10};
  int n=arr.size();
  quickSort(0,n-1,arr);
  for(int &num:arr)cout<<num<<" ";
return 0;
}
