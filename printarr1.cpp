
#include<iostream>
using namespace std;
void printarr(int i,int arr[]){
  if(i<0)return;
  cout<<arr[i]<<" ";
  printarr(i-1,arr);
}
void printarrrev(int i,int *arr){
  if(i<0)return;
  printarrrev(i-1,arr);
  cout<<arr[i]<<" ";
}
int main()
{
  int arr[]={1,2,3,4,5,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  printarr(n-1,arr);
  cout<<endl;
  printarrrev(n-1,arr);
return 0;
}