#include<iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1) return n;
    return fib(n-1)+fib(n-2);
}
int main(){
int a=0;
int n;
cin>>n;
while(a<n){
    cout<<fib(a)<<" ";
    a++;
}
    return 0;
}