
#include<bits/stdc++.h>
using namespace std;
int binary_search(int l,int r,int tr,int *arr){
  if(l>=r)return -1;
int mid=l+(r-l)/2;
if(arr[mid]==tr)return mid;
else if(arr[mid] < tr) return binary_search(mid+1,r,tr,arr);
else  return binary_search(l,mid-1,tr,arr) ;
}
int main()
{
  int arr[]={2,4,7,3,11,8,12};
  int n=sizeof(arr)/sizeof(arr[0]);
  int tr=3;
  sort(arr,arr+n);
  cout<<binary_search(0,n-1,tr,arr)<<endl;
return 0;
}

