

#include<iostream>
#include<vector>
using namespace std;
void merge(int l,int mid,int r,vector<int>&arr){
  // int n1=mid-(l)+1; // like j-i+1 
  // int n2=r-(mid+1)+1;
  vector<int>nums(r-l+1);
  int i=l,j=mid+1;
  int idx=0;
  while(i<=mid && j<=r){
    if(arr[i]<=arr[j]){
      nums[idx++]=arr[j++];
    }
    else{
      nums[idx++]=arr[i++];
    }
  }
  while(i<=mid){
    nums[idx++]=arr[i++];
  }
  while(j<=r){
    nums[idx++]=arr[j++];
  }
  
  idx=0;
  while(l<=r){
    arr[l++]=nums[idx++];
  }
}
void mergeSort(int l,int r,vector<int>&arr){
  if(l>=r)return;
  int mid=l+(r-l)/2;
  mergeSort(l,mid,arr);
  mergeSort(mid+1,r,arr);
  merge(l,mid,r,arr);
}
int main()
{
  vector<int>arr={9,7,8,3,6,4,5,2,1,10};
  int n=arr.size();
  mergeSort(0,n-1,arr);
  for(int &num:arr)cout<<num<<" ";
return 0;
}