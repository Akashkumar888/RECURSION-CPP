#include<iostream>
using namespace std;
void bubblesort(int *a,int n){
    // base case
    if(n==0 || n==1) return;
    
    // one sort
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
 bubblesort(a,n-1);
}
int main(){
   int a[]={5,4,3,2,1};
   int n=sizeof(a)/4;
   bubblesort(a,n);
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
    return 0;
}