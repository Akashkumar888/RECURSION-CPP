
#include<iostream>
using namespace std;
bool palindrome(int i,int j,string &s){
  if(i>=j)return true;
if(s[i]!=s[j])return false;
return palindrome(i+1,j-1,s);
}
int main()
{
  string s="racecar";
  int n=s.size();
  cout<<palindrome(0,n-1,s);
return 0;
}