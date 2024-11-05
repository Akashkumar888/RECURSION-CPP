
#include<iostream>
using namespace std;
void f(int i){
    if(i<1)return ;
    f(i-1); // by backtrack
    cout<<i<<endl;
}
int main()
{
    int n;
    cin>>n;
    f(n);
return 0;
}
