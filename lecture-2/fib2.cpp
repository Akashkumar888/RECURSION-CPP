#include<iostream>
using namespace std;
int fib(int n){
    int a=0,b=1;
    if(n==0 || n==1) return n;
    for(int i=2;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
int n;
cin>>n;
    cout<<fib(n)<<" ";
    return 0;
}