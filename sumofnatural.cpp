#include<iostream>
using namespace std;
int sumOfNaturalNumber(int n){
if(n==0)return 0;
return n+sumOfNaturalNumber(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sumOfNaturalNumber(n);
return 0;
}
