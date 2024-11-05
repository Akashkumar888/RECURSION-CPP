#include<iostream>
using namespace std;
int nthStair(int n){
  if(n==1 || n==2)return n;
  return nthStair(n-1) + nthStair(n-2);
}
int main()
{
  int n;
  cin>>n;
  cout<<nthStair(n)<<endl;
return 0;
}