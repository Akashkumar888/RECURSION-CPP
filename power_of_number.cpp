
#include<iostream>
using namespace std;
int powerOfNumber(int num,int n){
    if(n==0)return 1;
    return num*powerOfNumber(num,n-1);
}
int main()
{
    int a,b;
    cout<<"Enter a to the power b: ";
    cin>>a>>b;
    
    // always use snake case and camel case rule
    cout<<powerOfNumber(a,b);
return 0;
}