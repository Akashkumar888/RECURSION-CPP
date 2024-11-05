
#include<iostream>
using namespace std;
void even(int num,int n){
if(num>n)return;
even(num+2,n);
cout<<num<<endl;
}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    even(2,n);
return 0;
}