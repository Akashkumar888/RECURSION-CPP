#include<iostream>
using namespace std;
void reverse(int i,int n,int *arr){
    if(i>=n)return;
reverse(i+1,n,arr);
cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(0,n,arr);
return 0;
}