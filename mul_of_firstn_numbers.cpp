

#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0)return 1;
    return n*fact(n-1); // this line is incomplete i am waiting something 
}

// int fact(int i,int n){
//     if(i>n)return 1;
//     return i*fact(i+1,n);
// }

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    // cout<<fact(1,n);
return 0;
}