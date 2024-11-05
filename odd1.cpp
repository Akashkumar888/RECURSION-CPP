
#include<iostream>
using namespace std;
void odd(int num){
    if(num<1)return;
    cout<<num<<" ";
    odd(num-2);
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    if(n%2==0)n--;
    odd(n);
return 0;
}
