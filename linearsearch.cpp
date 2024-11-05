
#include<iostream>
using namespace std;
int linear_search(int i,int tr,int *arr){
  if(i<0)return -1;
  if(arr[i]==tr)return i;
  return linear_search(i-1,tr,arr);
}
int main()
{
  int arr[]={2,4,7,3,11,8,12};
  int tr=3;
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<linear_search(n-1,tr,arr)<<endl;
return 0;
}
