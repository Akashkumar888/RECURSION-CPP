
#include<iostream>
using namespace std;
int arrSum(int i,int arr[]){
  if(i<0)return 0;
  return arr[i]+arrSum(i-1,arr);
}
int arrSumRev(int i,int arr[]){
  if(i<0)return 0;
  return arrSumRev(i-1,arr)+arr[i];
}
int main()
{
  int arr[]={1,2,3,4,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<arrSum(n-1,arr);
  cout<<endl;
  cout<<arrSumRev(n-1,arr);
return 0;
}