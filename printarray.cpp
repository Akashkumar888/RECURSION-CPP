#include<iostream>
using namespace std;
void printarr(int i,int n,int arr[]){
  if(i>=n)return;
  cout<<arr[i]<<" ";
  printarr(i+1,n,arr);
}
void printarrrev(int i,int n,int *arr){
  if(i>=n)return;
  printarrrev(i+1,n,arr);
  cout<<arr[i]<<" ";
}
int main()
{
  int arr[]={1,2,3,4,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  printarr(0,n,arr);
  cout<<endl;
  printarrrev(0,n,arr);
return 0;
}