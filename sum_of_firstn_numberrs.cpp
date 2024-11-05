
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0)return 0;
    return n+sum(n-1); // this line is incomplete i am waiting something 
}

// int sum(int i,int n){
//     if(i>n)return 0;
//     return i+sum(i+1,n);
// }

int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    // cout<<sum(1,n);
return 0;
}