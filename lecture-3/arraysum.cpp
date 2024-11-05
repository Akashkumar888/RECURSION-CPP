#include<iostream>
using namespace std;
int arrsum(int a[],int n){
    if(n==0) return 0;
    int ans= a[0]+ arrsum(a+1,n-1);
    return ans;
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(a)/4;
    int k=arrsum(a,n);
    cout<<k<<endl;
    return 0;
}