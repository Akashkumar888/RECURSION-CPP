

#include<iostream>
#include<climits>
using namespace std;
int arrMin(int i,int arr[]){
  if(i==0)return arr[i];
  return min(arr[i],arrMin(i-1,arr) );

}
int arrMax(int i,int arr[]){
  if(i==0)return arr[i];
  return max(arr[i],arrMax(i-1,arr) );
}
int main()
{
  int arr[]={1,2,3,4,5,6,12,76,61,-23,45,15};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<arrMin(n-1,arr);
  cout<<endl;
  cout<<arrMax(n-1,arr);
return 0;
}