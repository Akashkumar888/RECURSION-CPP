#include<iostream>
using namespace std;
void even(int num,int n){
if(num>n)return;
cout<<num<<endl;
even(num+2,n);
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    even(2,n);
return 0;
}