#include<iostream>
using namespace std;
int arrmul(int a[],int n){
    if(n==0) return 1;
    int ans= a[0] * arrmul(a+1,n-1);
    return ans;
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/4;
    cout<<arrmul(a,n);
    return 0;
}