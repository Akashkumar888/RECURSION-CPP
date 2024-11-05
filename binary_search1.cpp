
#include<bits/stdc++.h>
using namespace std;
int binary_search(int l,int r,int tr,int *arr){
  if(l>=r)return -1;
int mid=l+(r-l)/2;
if(arr[mid]==tr)return mid;
else if(arr[mid] < tr) return binary_search(l,mid-1,tr,arr);
else  return binary_search(mid+1,r,tr,arr) ;
}
int main()
{
  int arr[]={12,11,8,7,4,3,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  int tr=3;
  cout<<binary_search(0,n-1,tr,arr)<<endl;
return 0;
}

