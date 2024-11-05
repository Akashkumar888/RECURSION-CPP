#include<iostream>
using namespace std;
string rev_string(int i,string &s){
  if(i<0)return "";
  //  return string(1, s[i]) + rev_string(i - 1, s);
  return s[i]+rev_string(i-1,s);
}
int main()
{
  string s="priya yadav";
  int n=s.size();
  cout<<rev_string(n-1,s)<<endl;
  int num=10;
  int &p=num;
  // p is a reference to num, meaning p is just another name for num.
  cout<<p<<endl;
return 0;
}